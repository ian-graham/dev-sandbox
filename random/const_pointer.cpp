#include <iostream>


class Foo {};


void func(const Foo* foo) {
    Foo* nonConstFoo = foo;
}



int main() {
    
    Foo* foo = new Foo();

    func(foo);

    delete foo;
}
