#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <cmath>

// Creates a class
class Circle
{
public:
	Circle(); // Constructor with default values
	Circle(double); // This constructs a circle with its radius determined by user input
	const double getArea(); // Calculates and returns the area of the circle that the user makes basedd on the radius
	const double getRadius(); // returns the radius that the user inputted
	void setRadius(double); // Sets the variable radius to that of user input
	static int getNumberOfObjects(); // Returns the number of classes objects that are created
	double& operator< (const Circle&) const; // This operator will run whenever "<" (comapring the radius values of different class objects)
	double& Circle::operator> (const Circle&) const; // This operator will run whenever ">" (comapring the radius values of different class objects)


private:
	double radius; // This variable is for the radius of the circle (determined by user input)
	static int numberOfObjects; // This variable keeps track of how many class objects are made
	static double PrevRadius[3]; // This array saves the radii that the user inputs
	static int i; // This variable is equal to the number of class objects are created
};
#endif