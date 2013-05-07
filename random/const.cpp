#include <iostream>



const char* kString = "Some string";


int main() {
   
    kString = "Some other string";
    //kString[0] = 'b';
    std::cout << kString << std::endl;
    return 0;
}
