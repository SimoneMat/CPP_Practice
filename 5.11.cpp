/*
* Task: Write a for loop that repeats seven times, asking the user to enter a number.
* The loop should also calculate the sum of the numbers entered.
*/

#include <iostream>
using namespace std;

int main()
{
	double total = 0.0;
	cout << "We need you to enter 7 numbers. " << endl;
	
	for (int times = 1; times < 8; times++)
	{
		cout << "Enter number " << times << " >> ";
		double userChoice;
		cin >> userChoice;
		total += userChoice;
	}
	
	cout << "Here is the total of all 7 numbers: " << total << endl;

	return 0;
}