#include<iostream>
#include<time.h>
using namespace std;

int factorial(int n) {
    if(n <= 1)
        return 1;
    return n*factorial(n-1);
}

int factorial_tr(int n, int acc) {
    if(n <= 1)
        return acc;
    return factorial_tr(n-1, acc*n);
}

int factorial_tr(int n) {
    return factorial_tr(n, 1);
}

int factorial_iter(int n) {
    int fact = 1;
    for(int i=2; i<=n; i++)
        fact *= i;
    return fact;
}

int fibonacci(int n) {
    if(n == 0 || n == 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int fibonacci_tr(int n, int prevPrev, int prev) {
    if(n <= 1)
        return n;
    else
        return fibonacci_tr(n-1, prev, prevPrev+prev);
}

int fibonacci_tr(int n) {
    return fibonacci_tr(n, 1, 1);
}

int fibonacci_iter(int n) {
    int prevPrevNum, prevNum = 0, currNum = 1;
    for(int i=1; i<n; i++) {
        prevPrevNum = prevNum;
        prevNum = currNum;
        currNum = prevPrevNum + prevNum;
    }
    return currNum;
}

int main(){
    //You can also try factorial numbers by modifying the code.
    clock_t s_time = clock();
    const int REPEAT = 10000;
    for(int i=0; i<REPEAT; i++) {
        fibonacci(20);
    }
    clock_t e_time = clock();
    cout << "Recursion Exec. Time: " << (double)(e_time-s_time)/CLOCKS_PER_SEC << "s" << endl;

    s_time = clock();
    for(int i=0; i<REPEAT; i++) {
        fibonacci_tr(20);
    }
    e_time = clock();
    cout << "Tail Recursion Exec. Time: " << (double)(e_time-s_time)/CLOCKS_PER_SEC << "s" << endl;

    s_time = clock();
    for(int i=0; i<REPEAT; i++) {
        fibonacci_iter(20);
    }
    e_time = clock();
    cout << "Iteration Exec. Time: " << (double)(e_time-s_time)/CLOCKS_PER_SEC << "s" << endl;
    
    return 0;
}