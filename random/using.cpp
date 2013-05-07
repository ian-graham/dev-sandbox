#include <iostream>


namespace other {
    
    class OtherClass{};
}


namespace local {
    using other::OtherClass;
    //typedef other::OtherClass OtherClass;
}

namespace local {
    
    void foo( OtherClass other ) {}
}


int main() {
    
    other::OtherClass other; 
    local::foo(other); 
    return 0;
}
