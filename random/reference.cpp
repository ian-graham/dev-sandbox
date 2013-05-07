#include <iostream>

class IFoo {
public:
    virtual void doSomething() const = 0;
};

class FooChild : public IFoo {
public:
    virtual void doSomething() const { std::cout << "Hello, nurse!" << std::endl; }
};

void check( const IFoo& foo ) {
    foo.doSomething();
}

int main() {
    FooChild child; 
    check( child );
    
    return 0;
}
