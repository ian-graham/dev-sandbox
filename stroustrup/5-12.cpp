#include <string>
#include <iostream>

using namespace std;

unsigned countSubstr( string str, const char* pair );
unsigned countSubstr( const char* str, const char* pair );

int main(int argc, char* argv[]) {
    char c_str[] = "xabaacbaxabbababab";
    string str(c_str);

    cout << "std::string: " << countSubstr( str, "ab" ) << endl;

    cout << "c_str: " << countSubstr( c_str, "ab" ) << endl;

    return 0;
}

unsigned countSubstr( string str, const char* pair ) {
    
    unsigned count = 0;
    unsigned index = str.find( pair );
    while( index != string::npos ) {
        ++count;
        index += 2; 
        index = str.find( pair, index );
    }
    return count;
}

unsigned countSubstr( const char* str, const char* pair ) {
    
    unsigned count = 0; 
    size_t len = strlen( str );
    for( int i = 0; i < len; ++i ) {
        if( str[i] == pair[0] && str[i+1] == pair[1] ) {
            ++i; 
            ++count;
        }
    }
    return count;
}






