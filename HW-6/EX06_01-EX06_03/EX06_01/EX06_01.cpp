////////////////////////////////////////////
// Aaron Meyers
// 6/15/16
// CS172: Homework 6: EX06_01
///////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int EX06_02(int X2, int Characters); // Prototype for the function that contains the code for EX06_02
int EX06_03(); // Prototype for the function that contains the code for EX06_03

int main()
{
	cout << "EX06_01" << endl; // Title

	// Sets up the random number generator and random integers
	srand(time(NULL));
	int x1 = rand() % 100;
	int x2 = rand() % 200;
	int characters = rand() % 200;

	ofstream output("Excerise13_1.txt", ios::out); // Opens a file for output

	// This test whether or not the file exists
	if (output.fail())
	{
		cout << "File does not exist" << endl;
		cout << "Exit program" << endl;
		return 0; // Ends the program
	}

	int count = 0; // Sest limit for the loop

	// This loop will outpout a random integer into the open file
	// The loop will end once it reachs the 100 limit
	while (count < 100)
	{
		output << x1 << " "; // Outputs a random integer and a space into the open file 
		x1 = rand() % 100; // Rerandomizes the integer
		count++; // Increments count by 1
	}

	output.close(); // Closes Output

	cout << "100 random numbers have been stored into a text file." << endl;
	cout << "Here are the numbers that are stored in the text file.\n" << endl;

	ifstream input("Excerise13_1.txt", ios::in); // Opens the same file for input into the program

	if (input.fail()) // Tests whether or not the file exists 
	{
		cout << "File does not exist" << endl;
		cout << "Exit program" << endl;
		return 0; // Ends program
	}

	double number; // Declares an integer for file input
	
	// This loop will take input from the file and output it to the user
	// The loop will end when the end of the file is reached
	while (input >> number)
	{
		input >> number; // Gets input from the file
		cout << number << " "; // Outputs the number retrieved from the file
	}
	cout << endl; // Empty line

	input.close(); // Closes input




	cout << "\nEX06_02" << endl; // Title for EX06_02

	EX06_02(x2, characters); // Calls function

	cout << "EX06_03" << endl; // Title for EX06_03

	EX06_03(); // Calls function


	return 0;


}
