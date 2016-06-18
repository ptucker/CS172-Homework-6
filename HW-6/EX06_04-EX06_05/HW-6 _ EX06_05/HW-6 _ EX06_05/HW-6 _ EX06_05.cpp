///////////////////////////////////////////
// Aaron Meyers
// 6/15/16
// CS172: Homework 6: EX06_05
//////////////////////////////////////////

#include <iostream>
#include <cmath>
#include <sstream>
#include "Complex Class.h"
using namespace std;

int main()
{
	Complex C1; // Creates a class object
	Complex C2; // Creates a class object

	double A = 0; // Declares a variable for user input
	double B = 0; // Declares a variable for user input

	cout << "Enter a complex number" << endl;
	cin >> A >> B; // Get data from the user
	C1 = Complex(A, B); // Sends user input into the class object

	cout << "Enter another complex number" << endl;
	cin >> A >> B; // Get data from the user
	C2 = Complex(A, B); // Sends user input into the class object


	int INDEX = 0; // Declares a variable for user input 
	cout << "\nOperator[] Test for first class object: Enter 0 or 1" << endl;
	cin >> INDEX; // Get data from the user
	cout << "Operator[] Test for first class object: The value of " << INDEX << " is " << C1[INDEX] << endl; // Sends user input to the operator function and display the result


	cout << "\n" << endl; // Makes an empty line


	cout << C1 << " + " << C2 << " = " << C1 + C2 << endl; // Sends data to the opertaor addition function and displays the result of the mathematic computation of the two complex numbers
	cout << C1 << " - " << C2 << " = " << C1 - C2 << endl; // Sends data to the opertaor subtraction function and displays the result of the mathematic computation of the two complex numbers
	cout << C1 << " * " << C2 << " = " << C1 * C2 << endl; // Sends data to the opertaor multiplication function and displays the result of the mathematic computation of the two complex numbers
	cout << C1 << " / " << C2 << " = " << C1 / C2 << endl; // Sends data to the opertaor division function and displays the result of the mathematic computation of the two complex numbers
	cout << "| " << C1 << " |" << " = " << C1.ABS(C1) << endl; // Sendz the data to the absolute value function and displays the result of the mathematic computation of the two complex numbers


	return 0;
}