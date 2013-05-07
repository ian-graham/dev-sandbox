#include <iostream>

using namespace std;

struct Date {

    /** Default date is the unix epoch. */
    Date() : month( 1 ), day( 1 ), year( 1970 ) {}

    Date( unsigned short m, unsigned short d, unsigned int y ) :
        month( m ), day( d ), year( y ) {}

    void readFromStdIn() {
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter year: ";
        cin >> year;
    }

    void print() {
        cout << "Date(mm/dd/yyyy): " << month << "/" << day << "/" << year << endl;
    }

    unsigned short month;
    unsigned short day;
    unsigned int year;

};


int main( int argc, char* argv[] ) {

    Date date;
    date.readFromStdIn();
    date.print();

    date = Date( 5u, 15u, 2012u );
    date.print();
}



