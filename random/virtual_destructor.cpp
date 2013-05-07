#include <iostream>

using namespace std;

class Base {
public:
    virtual ~Base() { cout << "~Base()" << endl; }
};

class Derived : public Base {
public:
    //virtual ~Derived() { cout <<"~Derived()" << endl; }
};

int main() {
    
    //Base* base = new Derived();
    //delete base; 

    Derived derived;

    return 0;
}
