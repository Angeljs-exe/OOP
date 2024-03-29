#include "BalanceInquiry.h" 
#include "Screen.h"
#include "BankDatabase.h" 


BalanceInquiry:: BalanceInquiry( int userAccountNumber, Screen &atmScreen, BankDatabase &atmBankDatabase )
: Transaction( userAccountNumber, atmScreen, atmBankDatabase ) {
// empty body
} 

void BalanceInquiry::execute() {
BankDatabase &bankDatabase = getBankDatabase();
Screen &screen = getScreen();

double availableBalance =
bankDatabase.getAvailableBalance( getAccountNumber() );

double totalBalance = bankDatabase.getTotalBalance( getAccountNumber() );

screen.displayMessageLine( "Balance Information:" );
screen.displayMessage( "- Available balance: " );
screen.displayDollarAmount( availableBalance );
screen.displayMessage( "\n- Total balance: " );
screen.displayDollarAmount( totalBalance );
screen.displayMessageLine( "" );
} 
