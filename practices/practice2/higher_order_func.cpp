#include<iostream>
using namespace std;

int x = 1;
int f(int y) {
    return x+y;
}
int g(function<int(int)> h) {
    int x = 2;
    return h(3)+x;
}

int s() {
    return x+1;
}
function<int()> calling_s() {
    return s;
}

int main(){
    //Functions as parameters
    int x = 4;
    int z = g(f);
    cout << "z = g(f): " << z << endl;
    
    //Functions as results
    function<int()> k = calling_s();
    int y = k();
    cout << "y = k(): " << y << endl;
    return 0;
}