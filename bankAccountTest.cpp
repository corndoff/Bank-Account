#include <iostream>
#include <string>
#include "bankAccount.h"
using namespace std;


int main() {
	Account bankAccount[10] = {
		{"Corey", "Checking", 100.61, 0.00},
		{"Tiffany", "Savings", 500.34, 0.03},
		{"Mary", "Checking", 234.65, 0.00},
		{"William", "Saving", 1500.95, 0.05},
		{"Mark", "Checking", 678.25, 0.00},
		{"Chris", "Saving", 3258.59, 0.07},
		{"Zach", "Saving", 1002.35, 0.10},
		{"Matthew", "Saving", 5045.65, 0.20},
		{"Lauren", "Checking", 2456.87, 0.00},
		{"Eddie", "Checking", 2315.57, 0.00},
	};

	for (int i = 0; i < 10; i++) {
		bankAccount[i].update_Balance();
		bankAccount[i].print();
	};
	return 0;
}
