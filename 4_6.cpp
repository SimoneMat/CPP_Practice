/*
Task: write a program that asks the user to enter an object's mass, then calculates and displays its weight.
If the object weights more than 1,000 newtons, display a message indicating that it is too heavy.
If the object weights less than 10 newtons, display a message indicating that the object is too light.
Calculating weight in newtons formula:  weight = mass * 9.8
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int MIN_MASS = 10;
	const int MAX_MASS = 1000;

	cout << "This program calculates weight in newtons.\n"
		<< "Enter an object's mass in kilograms >> ";
	double mass;
	cin >> mass;

	double weight;
	weight = mass * 9.8;

	cout << fixed << showpoint << setprecision(2);

	if (weight < MIN_MASS)
		cout << "The object is too light. Its weight is " << weight << " newtons.\n";
	else if (weight > MAX_MASS)
		cout << "The object is too heavy. Its weight is " << weight << " newtons.\n";
	else if (weight >= MIN_MASS && weight <= MAX_MASS)
		cout << "The weight of the object is " << weight << " newtons.\n";
	else
		cout << "You entered something else. Please check your value.\n";

		return 0;
}