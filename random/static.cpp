#include <iostream>

using namespace std;

int f();
int g();

const int duplicate = 0;

int main() {
    
    cout << "f(): " << f() << endl;
    cout << "g(): " << g() << endl;
    
    cout << "duplicate: " << duplicate << endl;
    return 0;

}
