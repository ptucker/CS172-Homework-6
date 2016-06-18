#include <iostream>
#include <cmath>
#include <sstream>
#include "Complex Class.h"


Complex::Complex() // Default constructor
{
	a = 0; // Sets value of "a" to 0
	b = 0; // Sets value of "b" to 0
}


Complex::Complex(double A) // Creates a class object with the value of "a" determined by user input
{
	a = A; // Sets value of "a" to user input
	b = 0; // Sets value of "b" to 0
}

Complex::Complex(double A, double B) // Creates a class object with the values of "a" and "b" determined by user input
{
	a = A; // Sets value of "a" to user input
	b = B; // Sets value of "a" to user input
}

double Complex::getRealPart() // Returns the value of "a"
{
	return a; 
}

double Complex::getImaginaryPart() // Returns the value of "b"
{
	return b; 
}

//These functions are not used
/*
string Complex::toString() // Creates a string statement with the values of "a" and "b"
{
	string A; // Declares a empty string
	string B; // Declares a empty string
	ostringstream convertA; // Declares a empty string
	ostringstream convertB; // Declares a empty string

	// Converts the double values of "a" and "b" to strings
	convertA << a;
	convertB << b;
	A = convertA.str();
	B = convertB.str();

	return A + B; // Returns the combined string
}


double Complex::add()
{
	return a + b;
}

double Complex::subtract()
{
	return a - b;
}

double Complex::multiply()
{
	return a * b;
}

double Complex::divide()
{
	return a / b;
}
*/

double Complex::ABS(Complex& A) // This function will calculate and return the absolute value of a complex number
{
	return sqrt((pow(A.getRealPart(), 2) + pow(A.getImaginaryPart(), 2)));
}




Complex operator+ (Complex& A, Complex& B) // This function will calculate the addition of two complex number and return the result
{
	return Complex((A.getRealPart() + B.getRealPart()), (A.getImaginaryPart() + B.getImaginaryPart()));
}

Complex operator- (Complex& A, Complex& B) // This function will calculate the subtraction of two complex number and return the result
{
	return Complex((A.getRealPart() - B.getRealPart()), (A.getImaginaryPart() - B.getImaginaryPart()));
}

Complex operator* (Complex& A, Complex& B) // This function will calculate the multuplition of two complex number and return the result
{
	return Complex(((A.getRealPart() * B.getRealPart()) - (A.getImaginaryPart() * B.getImaginaryPart())), (A.getImaginaryPart() * B.getRealPart()) + ((A.getRealPart() * B.getImaginaryPart())));
}

Complex operator/ (Complex& A, Complex& B) // This function will calculate the division of two complex number and return the result
{
	return Complex(((A.getRealPart() * B.getRealPart()) + (A.getImaginaryPart() * B.getImaginaryPart())) / (pow(B.getRealPart(), 2) + pow(B.getImaginaryPart(), 2)), ((A.getImaginaryPart() * B.getRealPart()) - (A.getRealPart() * B.getImaginaryPart())) / (pow(B.getRealPart(), 2) + pow(B.getImaginaryPart(), 2)));
}



double& Complex::operator[] (int index) // This function will return either teh value of "a" or "b" depending on the value of index(determined by user input)
{
	if (index == 0) // Executes if index equals 0
	{
		return a;
	}
	else if (index == 1) // Executes if index equals 1
	{
		return b;
	}
}


// This operator function will overload "<<" so that it will display the complex number in () and with the values of "a" and "b"
ostream& operator<<(ostream& lhs, Complex rhs)
{
	lhs << "(" << rhs.getRealPart() << ", " << rhs.getImaginaryPart() << "i)"; // saves data to "lhs"
	return lhs; // Returns "lhs"
}



