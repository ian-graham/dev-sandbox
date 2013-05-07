#include <iostream>
#include "boost/optional.hpp"

using namespace std;

int main() {
    
   
    boost::optional<int> opt;
    
    opt = 1; 
    
    opt.reset();

    if (opt) {
        cout << "opt is valid" << endl;
    } else {
        cout << "opt is not valid" << endl;
    }
    
    return 0;
}
