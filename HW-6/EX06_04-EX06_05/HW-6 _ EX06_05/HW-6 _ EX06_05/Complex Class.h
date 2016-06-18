#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

// Creates a class
class Complex
{
public:
	Complex(); // Default constructor
	Complex(double); // Constructs a class object based on user input for the real number (a)
	Complex(double, double); // Constructs a class object based on user input for both real(a) and imaginary(b) numbers
	double getRealPart(); // Returns the value of "a"
	double getImaginaryPart(); // Returns the value of "b"
	/*string toString(); // COnverst the double variables into a string (not used)
	double add(); // This will add complex numbers together (not used)
	double subtract(); // This will subtract complex numbers (not used)
	double multiply(); // This will multiply complex numbers together (not used)
	double divide(); // This will divide complex numbers together (not used)*/
	double ABS(Complex&); // This will calculate the absolute value of a complex number
	
	// These are the oeprator functions
	double& operator[] (int); // This will return either the value of "a" or "b" depending on the integer that the user inputs
	friend Complex operator+(Complex&, Complex&); // This will add complex numbers together (not used)
	friend Complex operator- (Complex&, Complex&); // This will subtract complex numbers (not used)
	friend Complex operator*(Complex&, Complex&); // This will multiply complex numbers together (not used)
	friend Complex operator/(Complex&, Complex&); // This will divide complex numbers together (not used)
	friend ostream& operator<<(ostream&, Complex); // This will output the complex numbers with the values of "a" and "b" in parentheses and an "i" after the "b" value


private:
	double a; // Declares a variable to act as a real number
	double b; // Declares a variable to act as a imaginary number
};






