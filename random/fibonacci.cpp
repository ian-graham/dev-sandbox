#include <iostream>

using namespace std;

void iterFibonacci( int );
void recursiveFibonacci( int );
pair<int,int> fib( int );

int main( int argc, char* argv[] ) {

    if( argc != 2 ) {
        cout << "usage: `" << argv[0] << " [n]` with n integers in the fibonacci sequence" << endl;
        return 1;
    }
    
    int n = atoi( argv[1] );
    iterFibonacci( n );
    recursiveFibonacci( n );
    return 0;
}

void iterFibonacci( int n ) {
    cout << "Iterative fibonacci sequence:" << endl; 
    unsigned first = 0;
    unsigned second = 1;
    unsigned current; 
    cout << first;
    if( n > 0 ) cout << ", " << second; 
    for( int i = 1; i < n; i++ ) {
        current = first + second;
        cout << ", " << current;
        first = second;
        second = current;
    }
    cout << endl;
}

void recursiveFibonacci( int n ) {
    cout << "Recursive fibonacci sequnece:" << endl; 
    fib( n );
    cout << endl;
}

pair<int,int> fib( int n ) {
    if( n == 0 ) {
        cout << "0";
        return pair<int,int>( 0, 0 );
    } else if( n == 1 ) {
        fib( n - 1 ); 
        cout << ", 1"; 
        return pair<int,int>( 0, 1 );
    }
    else {
        pair<int,int> p = fib( n - 1 );
        cout << ", " << p.first + p.second;
        pair<int,int> r( p.second, p.first + p.second );
        return r;
    }
}

