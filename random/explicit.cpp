#include <iostream>

using namespace std;

class Bar {
public:
    explicit Bar( int value ) : _value( value ) {}
    int getValue() { return _value; }
private:
    int _value;
};

class Foo {
public:
    Foo( const Bar& bar ) : _bar( bar ) {}
    void fooBar() { cout << "fooBar(): " << _bar.getValue() << endl; }
private:
    Bar _bar;
};


int main() {
    
    Foo foo( 1 );
    foo.fooBar(); 
   
    Bar bar( 2 );
    Foo foo2 = bar;
    foo2.fooBar();
    
    return 0;
}
