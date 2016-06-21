#include <iostream>
#include <cmath>
#include "Circle.h"

int Circle::numberOfObjects = 0; // Sets the value of "numberOfObjects" to zero
double Circle::PrevRadius[3]; // Sets the array for use as a static variable
int Circle::i = 0; // Sets the value of "i" to zero

Circle::Circle() // Defualt constructor
{
	radius = 1; // Sets radius to 1
	numberOfObjects++; // Increases the value numberOfObjects by 1;
}


Circle::Circle(double newRadius) // Creates a class object with the value of "radius" set by the user
{
	radius = newRadius; // Sets the value of "raidus" to that of user input
	numberOfObjects++; // Increases the valeu of "numberOfOBjects" by one
	PrevRadius[i] = newRadius; // Saves the radius that the user made into the array
	i++; // Increases "i" by one
}


const double Circle::getArea() // Calculates and returns the area of the circle the user created based on the radius that they inputted
{
	return radius * radius * 3.14159;
}


const double Circle::getRadius() // Returns the value of "radius" to the user
{
	return radius;
}


void Circle::setRadius(double newRadius) // Sets the "radius" variable to that of user input
{
	radius = (newRadius >= 0) ? newRadius : 0;
}

int Circle::getNumberOfObjects() // Returns the number of class objects that have been created
{
	return numberOfObjects;
}

// This operator will test whether or not a class object is less than the values stored in the "PrevRadius" array
// Returns the radius
double& Circle::operator< (const Circle& FirstCircle) const
{
	//PT -- I'm not sure why you need PrevRadius. You compare FirstCircle with this
	//16/20
	
	
	// This loop will go through the "PrevRadius" array
	// The loop will end once it returns the radius value in the array back to the user
	for (int j = 0; j < i; j++)
	{
		if (PrevRadius[j] < FirstCircle.radius) // Executes if the current value is less than the radius of the class object 
		{
			return PrevRadius[j];
		}
		else if (PrevRadius[j] == FirstCircle.radius) // Executes if the current value is equal to the radius of the class object 
		{
			return PrevRadius[j];
		}
		else // Executes if the current value is greater than the radius of the class object 
		{
			return PrevRadius[j];
		}
	}
}

// This operator will test whether or not a class object is greater than the values stored in the "PrevRadius" array
// Returns the radius
double& Circle::operator> (const Circle& FirstCircle) const
{
	// This loop will go through the "PrevRadius" array
	// The loop will end once it returns the radius value in the array back to the user
	for (int j = 0; j < i; j++)
	{
		if (PrevRadius[j] < FirstCircle.radius) // Executes if the current value is less than the radius of the class object 
		{
			return PrevRadius[j];
		}
		else if (PrevRadius[j] == FirstCircle.radius) // Executes if the current value is equal to the radius of the class object 
		{
			return PrevRadius[j];
		}
		else // Executes if the current value is greater than the radius of the class object 
		{
			return PrevRadius[j];
		}
	}
}


