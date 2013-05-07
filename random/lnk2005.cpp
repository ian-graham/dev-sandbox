#include <iostream>

using namespace std;


namespace experimental {
    
    extern "C" { 
        void foo() { cout << "experimental::foo()" << endl; }
    }
}

namespace citrix {
    
    extern "C" { 
        void foo() { cout << "citrix::foo()" <<endl; }
    }
}

int main() {

    experimental::foo();
    citrix::foo();
    return 0;
}
