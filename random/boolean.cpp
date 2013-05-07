#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    if( ! false && (true || false) ) {
       cout << "It should work!!!" << endl;
    } else {
        cout << "I'm realy confused" << endl;
    }
    return 0;
}
