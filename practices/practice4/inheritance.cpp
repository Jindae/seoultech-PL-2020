#include<iostream>

class Top{ 
public:
    int w = 0;
    int f(){ return w;} 
};

class A : public Top { 
public:    
    int x = 1;
    int g(){ return w+x;}
};

class B : public Top {
public:
    int y = 2;
    int f(){ return w+y;}
    int k(){ return y; }
};

class Bottom : public A, public B{
public:    
    int z = 3; 
    // int f(){ return B::f(); }
    int h(){ return z; }
};

//Toggle comment at line 25 to remove ambiguity.
int main() {
    Bottom b;    
    std::cout << b.f() << std::endl;
    return 0;
}