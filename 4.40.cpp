#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int choice;
	double number = 1.5987654321;
	cout << "Enter one of the numbers: 1, 2, 3 or 4 >> ";
	cin >> choice;

	switch (choice) {
	case 1: cout << fixed << showpoint << setprecision(2);
			cout << number;
		break;
	case 2: 
	case 3:	cout << fixed << showpoint << setprecision(4);
			cout << number;
		break;
	case 4: cout << fixed << showpoint << setprecision(6);
			cout << number;
		break;
	default: cout << fixed << showpoint << setprecision(8);
			cout << number;
		break;
	}

	return 0;
}