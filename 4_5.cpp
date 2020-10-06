/*
Task: Calculate person's body index (BMI).
BMI = weight * 703/ height^2    <-- weight is measured in pounds and height is in inches
*/

#include <iostream>
#include <math.h> // pow
#include <iomanip>
using namespace std;

int main()
{
	const double MIN_INDEX = 18.5;
	const double MAX_INDEX = 25;
	const double LOWEST_INDEX = 7.5; //lowest ever recorded BMI
	const double HIGHEST_INDEX = 188; // highest ever recorded BMI

	cout << "Let's calculate your BMI.\n"
		<< "What is your weight in pounds? >> ";
	long double weight;
	cin >> weight;

	cout << "What is your height in inches? >> ";
	long double height;
	cin >> height;

	long double BMI;
	BMI = (weight * 703 / (pow (height, 2))* 100);

	cout << fixed << showpoint << setprecision(2);

	if (BMI < MIN_INDEX && BMI >= LOWEST_INDEX)
		cout << "You are underweight. Your BMI is " << BMI;
	else if (BMI >= MIN_INDEX && BMI <= MAX_INDEX)
		cout << "Your weight is optimal. It is " << BMI;
	else if (BMI > MAX_INDEX && BMI <= HIGHEST_INDEX)
		cout << "You are overweight. Your BMI is " << BMI;
	cout << endl;

	return 0;
}