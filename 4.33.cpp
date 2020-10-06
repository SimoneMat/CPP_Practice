/*
Task: Using the following chart, write an if/else if statement that assigns .10, .15, or .20 to commission, depending on the value in sales.
--------------------------------------
Sales					Commision Rate
--------------------------------------
Up to $10,000			10%
$10,000 to $15,000		15%
Over $15,000			20%
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double commission, sales;
	const int MIN_SALES = 0,
			  MID_SALES = 10000,
			  MAX_SALES = 15000;

	cout << "Enter the amount of sales this month >> ";
	cin >> sales;

	//numeric output formating:
	cout << fixed << showpoint << setprecision(2);

	//checking how much commissions generated
	if (sales >= MIN_SALES && sales < MID_SALES) {
		commission = sales * 0.1;
		cout << "Your commissions are $" << commission << ".";
	}
	else if (sales >= MID_SALES && sales <= MAX_SALES){
		commission = sales * 0.15;
		cout << "Your commissions are $" << commission << ".";
	}
	else if (sales > MAX_SALES){
		commission = sales * 0.2;
		cout << "Your commissions are $" << commission << ".";
	}
	else
		cout << "You entered invalid amount."; //for invalid entry

	return 0;
}