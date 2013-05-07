#include <iostream>

using namespace std;

int main( int argc, char* argv[] ) {
   
    unsigned long allocatedMemory = 0;
    try {
        while( true ) { 
            new char[10000]; 
            allocatedMemory += 10000;
        }
    } catch ( bad_alloc& ba ) {
        cout << "Caught bad_alloc: " << ba.what() << " after allocating " << allocatedMemory << " bytes" << endl;
    }
    
    return 0;
}
