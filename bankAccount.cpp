#include <iostream>
#include <string>
#include "bankAccount.h"
using namespace std;

string Account::get_AccountName() { // method that returns the name on an account
	return account_name;
};
double Account::get_Balance() {  // method that returns the name on an account
	return balance;
};
string Account::get_AccountType() {  // method that returns the type of account
	return account_type;
};
double Account::get_InterestRate() {  // method that returns the interest rate on an account
	return interest_rate;
};
int Account::get_AccountNumber() {  // method that returns the account number
	return account_number;
};
double Account::update_Balance() { // method that calculates the amount of interest accumulated then adds it to the starting balance on the account 
	double interest_amount;        // and sets it as the new balance
	interest_amount = interest_rate * balance;
	balance = interest_amount + balance;
	return balance;
};
void Account::print() {  // method that prints out the name on the account, the account number, the type of account, the balance, and the interest rate
	cout << "\nCustomers name: " << account_name << endl;
	cout << "Customers account number: " << account_number << endl;
	cout << "Type of account: " << account_type << endl;
	cout << "Balance: " << balance << endl;
	cout << "Interest rate: " << interest_rate << endl;
};
bool Account::deposit(double amount) {  // this method is if we made a deposit into an account. it would check to make sure the deposit amount is over $0
	if (amount >= 0) {                  // then add the deposit amount and add it to the balance in the account and set the sum as the new balance.
		balance = amount + balance;		// if the deposit amount is less than $0 it will return false.
		return true;
	}
	else {
		return false;
	}
};
bool Account::withdraw(double amount) {     // this method is if we made a withdraw from an account. it would check to see that the withdraw amount is over 
	if (amount >= 0 && amount <= balance) { // over $0 then make sure the withdraw amount is less than or equal to the balance in the account. if it returns 
		balance = balance - amount;         // true on both of those it will subtract the withdraw amount from the balance in the account and set the amount
		return true;                        // as new balance.
	}										// if the withdraw amount is less than $0 or more than the balance in the account it will return false.
	else {
		return false;
	}
};
static int a = 1;
Account::Account(string n, string t, long double b, double ir) {  // Constructor that sets the name, type, balance, interest rate, and account number that
	account_name = n;											  // increases by 1 every time a new account is made.	
	account_type = t;
	balance = b;
	interest_rate = ir;
	account_number = a++;
};
