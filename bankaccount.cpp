#include <iostream>
#include <string>
using namespace std;

class Account {
	string name;
	string accType;
	double bal;
	int accNum;
	double intRate;
	static int a;
public:
	Account():accNum(a++){}
	string get_name() {
		return name;
	}
	double get_bal() {
		return bal;
	};
	string get_type() {
		return accType;
	};
	double get_intRate() {
		return intRate;
	};
	int get_accnum() {
		return accNum;
	};
	double update_bal() {

		bal = intRate * bal + bal;
	};
	void print() {
		cout << "Customers name: " << name << endl;
		cout << "Customers account number: " << accNum << endl;
		cout << "Type of account: " << accType << endl;
		cout << "Balance: " << bal << endl;
	};
	bool deposit(double amount) {
		if (amount >= 0) {
			bal = amount + bal;
			return true;
		}
		else {
			return false;
		}
	};
	bool withdraw(double amount) {
		if (amount >= 0 && amount <= bal) {
			bal = bal - amount;
			return true;
		}
		else {
			return false;
		}
	};
	Account(string n, string t, double b, double ir) {
		name = n;
		accType = t;
		bal = b;
		intRate = ir;
		accNum = a++;
	};
};
int Account::a = 0;

int main() {
	Account bankAccount[10] = {
		{"Corey", "checking", 100.61, 0.00},
		{"Tiffany", "savings", 500.34, 0.03 },
		{"Mary", "checking", 234.65, 0.00},
		{"William", "saving", 1500.95, 0.05},
		{"Mark", "checking", 678.25, 0.00},
		{"Chris", "saving", 3258.59, 0.07},
		{"Zach", "saving", 10002.35, 0.10},
		{"Matthew", "saving", 25045.65, 0.20},
		{"Lauren", "checking", 2456.87, 0.00},
		{"Eddie", "checking", 2315.57, 0.00},
	};

	for (int i = 0; i < 10; i++) {
		bankAccount[i].update_bal();
		bankAccount[i].print();
	};
	return 0;
};
