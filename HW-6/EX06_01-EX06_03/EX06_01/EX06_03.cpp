/////////////////////////////////////////
// Aaron Meyers
// 6/15/16
// CS172: Homework 6: EX06_03
//////////////////////////////////////////

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int EX06_03()
{

	string File = "C:\\Users\\ameyers\\Desktop\\HW-6_EX06_03___BabyNames\\BabyNameRanking"; // Declares a string within an incomplete file path
	string year = ""; // Declares a string variable for user input

	cout << "Enter the year (2000 - 2015) in which you want to search through. "
		<< "Your input should be like (Ex: 2000.txt)" << endl;
	cin >> year; // Gets data from the user

	File = File + year; // Combines the File string with the input from the user to obtain a complete file path


	ifstream BabyNames(File.c_str(), ios::in); // Opens a file for input into the program

	if (BabyNames.fail()) // Test whether or not the file exists
	{
		cout << "That file does not exist." << endl;
		cout << "End program" << endl;
		return 0; // Ends program
	}

	char Gender; // Declares a char variable for user input 
	string NAME = ""; // Declares a string variable for user input (this will act as the name that they want to search for)
	int RANK = 0; // Declares a variable to keep track of rank

	cout << "Enter the gender (M or F)" << endl;
	cin >> Gender; // Get input from the user


	cout << "Enter a name that you want to search for" << endl;
	cin >> NAME; // Get input from the user

	int i = 0; // Declares a variable to keep track of array spaces
	int ArraySIZE = 1000; // declares a size for the array
	string AllNames[1000]; // Declares an array

	// This loop will executes until the end of the file is reached
	while (!BabyNames.eof())
	{
		AllNames[i] = BabyNames.get(); // Saves input from the file into the array
		i++; // Increases the value of i
	}

	int KEEP = 0; // Declares a variable that will save the spot in the array if the file variable matches user input NAME
	
	// This loop will run until it either goes through the entire array or if the file input matches NAME
	for (int i = 0; i < ArraySIZE; i++)
	{
		RANK++; // Increments the value of RANK
		if (AllNames[i] == NAME) // Executes if the current input variable from the file is equal to the NAME that the user inputted
		{
			KEEP = i;
			break; // Breaks the loop
		}
	}

	cout << AllNames[KEEP] << " is ranked " << RANK << " in year " << year << endl; // Displays the results

	BabyNames.close(); // Closes file


	return 0;
}
