#include "ATM.h"
#include "Transaction.h"
#include "BalanceInquiry.h"
#include "Withdrawal.h" 
#include "Deposit.h" 


enum MenuOption { BALANCE_INQUIRY = 1, WITHDRAWAL, DEPOSIT, EXIT };


ATM::ATM() 
: userAuthenticated ( false ), currentAccountNumber( 0 ) 
{
// empty body
} 

// start ATM
void ATM::run() {
while ( true ) {
while ( !userAuthenticated ) {
screen.displayMessageLine( "Welcome!" );
authenticateUser(); 
} 

performTransactions(); 
userAuthenticated = false; 
currentAccountNumber = 0; 
screen.displayMessageLine( "Thank you! Goodbye!" );
} // end while 
} // end function run

// mengautentikasi user dengan data didalam database
void ATM::authenticateUser() {
screen.displayMessage( "Please enter your account number: " );
int accountNumber = keypad.getInput(); 
screen.displayMessage( "Enter your PIN: " );
int pin = keypad.getInput(); 

// untuk mengembalikan hasil pengecekan dari database
userAuthenticated = bankDatabase.authenticateUser( accountNumber, pin );
	if ( userAuthenticated ) {
currentAccountNumber = accountNumber;
} 
	else screen.displayMessageLine("Invalid account number or PIN. Please try again." );
}

// menampilkan menu utama dan juga proses transaksi
void ATM::performTransactions() {

Transaction *currentTransactionPtr;
bool userExited = false;
	while ( !userExited ) {

int mainMenuSelection = displayMainMenu();


switch ( mainMenuSelection ) {
case BALANCE_INQUIRY:
case WITHDRAWAL:
case DEPOSIT:
	

currentTransactionPtr = createTransaction( mainMenuSelection );
currentTransactionPtr->execute();
delete currentTransactionPtr;
break;
case EXIT:
screen.displayMessageLine( "Exiting the system..." );
userExited = true;
break;
default: 
screen.displayMessageLine("You did not enter a valid selection. Try again." );
break;
} // end switch
} // end while
} // end function performTransactions

// display menu utama dan mengembalikan input
int ATM::displayMainMenu() const {
screen.displayMessageLine( "Main menu:" );
screen.displayMessageLine( "1 - View my balance" );
screen.displayMessageLine( "2 - Withdraw cash" );
screen.displayMessageLine( "3 - Deposit funds" );
screen.displayMessageLine( "4 - Exit" );
screen.displayMessage( "Enter a choice: " );
return keypad.getInput(); 
} 

// mengembalikan objek spesifik dari kelas turunan Transaction 
Transaction *ATM::createTransaction( int type ) {
Transaction *tempPtr;
	switch ( type ) {
case BALANCE_INQUIRY: 
tempPtr = new BalanceInquiry(currentAccountNumber, screen, bankDatabase );
break;

case WITHDRAWAL:
tempPtr = new Withdrawal( currentAccountNumber, screen,
bankDatabase, keypad, cashDispenser );
break;

case DEPOSIT:
tempPtr = new Deposit( currentAccountNumber, screen,
bankDatabase, keypad, depositSlot );
break;
} // end switch

return tempPtr; 
} 
