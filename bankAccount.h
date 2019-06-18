#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	string account_name;	// name on account
	string account_type;	// type of account
	int account_number;		// account number
	double balance;			// balance in account
	double interest_rate;	// interest rate of account
public:
	string get_AccountName();
	double get_Balance();
	string get_AccountType();
	double get_InterestRate();
	int get_AccountNumber();
	double update_Balance();
	void print();
	bool deposit(double amount);
	bool withdraw(double amount);
	Account(string n, string t, long double b, double ir); //Constructor the inputs Name, type of account, balance, and interest rate
};
