#include <iostream>


class Foo {
public:
    void bar() {
        std::cout << "Foo::bar()" << std::endl;
    }
};

class MockFoo : public Foo {
public:
    void bar() {
        std::cout << "MockFoo::bar()" << std::endl;
    }
};

int main() {

    Foo* mockFoo = new MockFoo();
    
    mockFoo->bar();

    delete mockFoo;

    return 0;
}
