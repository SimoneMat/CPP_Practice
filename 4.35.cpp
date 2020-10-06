/*
Task: Write nested if statements that perform the following tests: if amount1 is greater than 10 and amount2 is less than 100, 
display the greater of the two.
*/

#include <iostream>
using namespace std;

int main() {
	double amount1, amount2;
	cout << "Enter first number >> ";
	cin >> amount1;
	cout << "Enter second number >> ";
	cin >> amount2;

	if (amount1 > 11 || amount2 < 99)
	{
		if (amount1 > amount2)
			cout << "Greater number is " << amount1;
		else if (amount1 < amount2)
			cout << "Greater number is " << amount2;
		else
			cout << "Numbers are the same: " << amount1;
	}
	else
		cout << "You entered something different. ";

	return 0;
}