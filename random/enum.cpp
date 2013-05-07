#include <iostream>

using namespace std;

enum ETest { eOne, eTwo, eThree };

class IFoo {
public: 
    virtual void f( ETest ) = 0; 
};

template <typename _TInterface>
class AbstractFoo : public _TInterface {
public:
    virtual void f( ETest ) { 
        cout << "Called f( ETest )" << endl;
    }
};

class ConcreteFoo : public AbstractFoo<IFoo> {
public:
    using AbstractFoo<IFoo>::f;

public:
    virtual void f( int num ) {
        cout << "Called f( int )" << endl;
    }
};

int main() {
    ConcreteFoo foo; 
    foo.f( eOne );
}

