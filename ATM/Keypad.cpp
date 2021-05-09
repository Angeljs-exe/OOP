#include <iostream>
using std::cin;

#include "Keypad.h" 

// meminta input dan menampung input
int Keypad::getInput() const {
int input; 
cin >> input; 
return input;
} 
