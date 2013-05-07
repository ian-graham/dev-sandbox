#include <iostream>
#include "boost/shared_ptr.hpp"
#include "boost/bind.hpp"
#include "boost/function.hpp"


struct X {
    void f();
};


typedef boost::shared_ptr<X> XPtr;
typedef std::pair<int,XPtr> TPair;

int main() {
    
    boost::function<void()>()();

    XPtr x(new X());

    TPair pair;
    pair.second = x;

    //boost::bind(&XPtr, _1);
    
    return 0;
}
