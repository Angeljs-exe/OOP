#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

#include "Screen.h" 


// display pesan tanpa line baru
void Screen::displayMessage( string message ) const {
cout << message;
} 

//display pesan dengan line baru
void Screen::displayMessageLine( string message ) const {
cout << message << endl;
} 

// menampilkan jumlah dalam dollar
void Screen::displayDollarAmount( double amount ) const {
cout << fixed << setprecision( 2 ) << "$" << amount;
} 
