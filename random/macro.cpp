#include <iostream>

using namespace std;


#define SOME_MACRO(arg) arg##Append


namespace citrix {

    class SOME_MACRO(Foo) {
    public:
        void f() {
            cout << "f()" << endl;
        }
    };
}

using citrix::SOME_MACRO(Foo);

int main() {

    SOME_MACRO(Foo) foo;
    foo.f();

    return 0;
}
