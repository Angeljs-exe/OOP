#include "Transaction.h" 
#include "Screen.h" 
#include "BankDatabase.h" 


Transaction::Transaction( int userAccountNumber, Screen &atmScreen, BankDatabase &atmBankDatabase )
: accountNumber( userAccountNumber ), screen( atmScreen ), bankDatabase( atmBankDatabase ) {
// empty body
} 

// mengembalikan account number
int Transaction::getAccountNumber() const {
return accountNumber;
} 

// mengembalikan reference ke screen
Screen &Transaction::getScreen() const {
return screen;
} 

// mengembalikan reference ke database bank
BankDatabase &Transaction::getBankDatabase() const {
return bankDatabase;
} 
