/*
Task: Write a short program that opens the file created by the program you wrote for 5.22, 
reads all of the numbers from the file, and displays them.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//open the file
	ifstream inputFile;
	inputFile.open("5.22.txt");

	for (int number = 0; number < 11; number++)
	{
		inputFile >> number;		//reads data from file
		cout << number << endl;		//displayes data from file
	}

	cout << "Done";

	//closes the file
	inputFile.close();

	return 0;
}