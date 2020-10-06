/*
Task: Write an if statement that performs the following logic: if the variable x is equal to 20, then assign 0 to the variable y.
*/

#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "Enter the number >> ";
	cin >> x;
	if (x == 20) {
		int y;
		y = 0;
		cout << "Element " << 'y' << " equals " << '0';
	}
	else
		cout << "You have entered " << x;
	return 0;
}