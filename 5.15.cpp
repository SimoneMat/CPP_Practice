/*
* Task: Modify the program 5.13 so any negative value is a sentinel.
*/

#include <iostream>
using namespace std;

int main()
{
	int a, x, y = 0;

	for (x = 0; x < 10; x++)
	{
		cout << "Enter a number >> ";
		cin >> a;
		
		if (a < 0)
		{
			cout << "Reenter a number >> ";
			cin >> a;
		}

		y += a;
	}

	cout << "The sum of those numbers is " << y << endl;

	return 0;
}