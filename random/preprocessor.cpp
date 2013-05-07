#include <iostream>

using namespace std;


#define CITRIX_EXPERIMENTAL(method) method##Experimental

namespace test {
    void CITRIX_EXPERIMENTAL(foo)(); 
}

int main() {

    using CITRIX_EXPERIMENTAL(test::foo);
    
    CITRIX_EXPERIMENTAL(foo)();
    return 0;
}

namespace test {
    void CITRIX_EXPERIMENTAL(foo)() {
        cout << "fooExperimental()" << endl;
    }
}

