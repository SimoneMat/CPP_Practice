/*
Task: Write a program that asks the user to enter a number of seconds, and convert them into minutes, hours and days.
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the number of seconds and this program will convert it into minutes, hours and days >> ";
	long long seconds;
	cin >> seconds;

	// how many seconds do have minute? Hour? Day?
	const int MAX_SECONDS_IN_MINUTE = 60;
	const int MAX_SECONDS_IN_HOUR = 3600;
	const int MAX_SECONDS_IN_DAY = 86400;

	int days, hours, minutes;

	if (seconds >= 0) 
	{
		days = seconds / MAX_SECONDS_IN_DAY;
		hours = (seconds % MAX_SECONDS_IN_DAY) / MAX_SECONDS_IN_HOUR;
		minutes = (seconds % MAX_SECONDS_IN_HOUR) / MAX_SECONDS_IN_MINUTE;
		seconds = seconds % MAX_SECONDS_IN_MINUTE;

		cout << "Here is the result: "
			<< days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds.\n";
	}
	else
		cout << "You entered incorect value. Please try again by running the program once more.\n";

	return 0;
}