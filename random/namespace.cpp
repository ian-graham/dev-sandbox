#include <iostream>

using namespace std;


namespace citrix { 

    class IFoo {
    public:
        virtual void method() = 0;
    };

    class Foo : public IFoo {
        virtual void method() { cout << "method()" << endl; }
    };

    }

namespace experimental {

    using citrix::IFoo; 
/*
class IFoo {
public:
    virtual void method() = 0;
};
*/

}


int main() {
    
    experimental::IFoo* foo = new citrix::Foo();

    foo->method();
    
    delete foo;

    return 0;
}
