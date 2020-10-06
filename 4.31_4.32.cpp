/*\
Task: Write an if statement that assigns 100 to x when y is equal to 0, and assigns 0 to x when y is equal to 10.
Otherwise, it should assign 1 to x.
*/

#include <iostream>
using namespace std;

int main() {
	int x, y;

	cout << "Enter the y value >> ";
	cin >> y;

	if (y == 0)
		x = 100;
	else if (y == 10)
		x = 0;
	else
		x = 1;

	cout << "Your when your y is " << y << ", your x is " << x << "." << endl;

	return 0;
}