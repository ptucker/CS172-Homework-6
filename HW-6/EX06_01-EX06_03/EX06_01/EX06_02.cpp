///////////////////////////////////////////////
// Aaron Meyers
// 6/15/16
// CS172: Homework 6: EX06_02
//////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

int EX06_02(int X2, int Characters)
{
	ofstream OUTPUT("Counting Characters.txt", ios::out); // Opens file for output

	if (OUTPUT.fail()) // Test whether or not the file exists
	{
		cout << "File does not exist" << endl;
		cout << "Exit program" << endl;
		return 0;
	}

	int LoopLimit = 0; // Declares a variable for limitint the following loop
	int count = X2; // Declares a variable for how many characters (which is randomized) get inputted into the txt file
	while (LoopLimit < count)
	{
		OUTPUT << Characters << " "; // Outputs the random character into the txt file
		Characters = rand() % 200; // Randomizes the character variable for the next input
		LoopLimit++; // Increments the LoopLimit variable
	}

	OUTPUT.close(); // Closes output

	cout << "The program added an unknown number of integers into a text file." << endl;
	cout << "The program will now determine how many integers were added to the text file and output the result.\n" << endl;

	ifstream INPUT("Counting Characters.txt", ios::in);

	if (INPUT.fail()) // Test whether or not the file exists
	{
		cout << "File does not exist" << endl;
		cout << "Exit program" << endl;
		return 0;
	}

	int TotalSUM = 0; // Declares a variable for keeping track of how many characters are in the file
	int CharactersInFile; // Declares a variable for input from an open file

	// This loop will take input from the file and output it to the user
	// The loop will end when the end of the file is reached
	while (INPUT >> CharactersInFile)
	{
		TotalSUM++; // Increments the TotalSUM variable
	}

	cout << "The total number of integers that are in the text file is " << TotalSUM << endl;

	INPUT.close(); // Closes input

	return 0;
}
