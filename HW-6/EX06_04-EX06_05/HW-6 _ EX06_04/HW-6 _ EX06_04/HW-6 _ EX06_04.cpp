/////////////////////////////////////////////
// Aaron Meyers
// 6/15/16
// CS172: Homework 6: EX06_04
/////////////////////////////////////////////

#include <iostream>
#include <cmath>
#include "Circle.h"
using namespace std;

double FirstSpot(Circle circle1, Circle circle2, Circle circle3); // Prototype for a function
double SecondSpot(Circle circle1, Circle circle2, Circle circle3); // Prototype for a function
double ThirdSpot(Circle circle1, Circle circle2, Circle circle3); // Prototype for a function
void first(double First, Circle circle1, Circle circle2, Circle circle3); // Prototype for a function
void second(double Second, Circle circle1, Circle circle2, Circle circle3); // Prototype for a function
void third(double Third, Circle circle1, Circle circle2, Circle circle3); // Prototype for a function

int main()
{
	double input = 0; // Declares a varible for user input
	cout << "Enter a radius" << endl;
	cin >> input; // Get data from the user

	Circle circle1(input); // Creates class object with user input as the radius
	cout << "\nThe area of the circle of radius " << circle1.getRadius() << " is " 
		<< circle1.getArea() << endl; // Outputs the radius and the area of the circle


	cout << "\nEnter a radius" << endl;
	cin >> input; // Get data from the user

	Circle circle2(input); // Creates a class object with user input as the radius
	cout << "\nThe area of the circle of radius " << circle2.getRadius() << " is "
		<< circle2.getArea() << endl; // Outputs the radius and the area of the circle


	cout << "\nEnter a radius" << endl;
	cin >> input; // Get data from the user

	Circle circle3(input); // Creates a class object with user input as the radius
	cout << "\nThe area of the circle of radius " << circle3.getRadius() << " is "
		<< circle3.getArea() << endl; // Outputs the radius and the area of the circle
	
	cout << "\nThe number of objects created: " << Circle::getNumberOfObjects() << endl;


	cout << "\n\n" << endl; // Creates multiple empty lines
	
	cout << "The order of the class objects by radii is:" << endl;
	double First = FirstSpot(circle1, circle2, circle3); // Declares a variable and makes it equal to the radius value that is returned from the function
	double Second = SecondSpot(circle1, circle2, circle3); // Declares a variable and makes it equal to the radius value that is returned from the function
	double Third = ThirdSpot(circle1, circle2, circle3); // Declares a variable and makes it equal to the radius value that is returned from the function

	first(First, circle1, circle2, circle3);
	second(Second, circle1, circle2, circle3);
	third(Third, circle1, circle2, circle3);

	return 0;
}

//This function will determine which of the class object has the lowest radius value out f them all
double FirstSpot(Circle circle1, Circle circle2, Circle circle3)
{
	if (circle1.getRadius() < circle2.getRadius() && circle1.getRadius() < circle3.getRadius()) // Executes if circle1 radius is less than both circle2 and circle3
	{
		return circle1.getRadius();
	}
	if (circle2.getRadius() < circle3.getRadius() && circle2.getRadius() < circle1.getRadius()) // Executes if circle2 radius is less than both circle1 and circle3
	{
		return circle2.getRadius();
	}
	if (circle3.getRadius() < circle1.getRadius() && circle3.getRadius() < circle2.getRadius()) // Executes if circle3 radius is less than both circle2 and circle1
	{
		return circle3.getRadius();
	}
	return -1; // This will execute if the class object fail all of the above conditions
}

//This function will determine which of the class object has the medium radius value out of the 3
double SecondSpot(Circle circle1, Circle circle2, Circle circle3)
{
	if (circle1.getRadius() > circle2.getRadius() && circle1.getRadius() < circle3.getRadius()) // Executes if circle1 radius is less than circle3 and greater than circle2
	{
		return circle1.getRadius();
	}
	if (circle2.getRadius() < circle3.getRadius() && circle2.getRadius() > circle1.getRadius()) // Executes if circle2 radius is less than circle3 and greater than circle1
	{
		return circle2.getRadius();
	}
	if (circle3.getRadius() < circle1.getRadius() && circle3.getRadius() > circle2.getRadius()) // Executes if circle3 radius is less than circle1 and greater than circle2
	{
		return circle3.getRadius();
	}
	return -1; // This will execute if the class object fail all of the above conditions
}

//This function will determine which of the class object has the largest radius value out of them all
double ThirdSpot(Circle circle1, Circle circle2, Circle circle3)
{
	if (circle1.getRadius() > circle2.getRadius() && circle1.getRadius() > circle3.getRadius()) // Executes if circle1 radius is greater than circle2 and circle3
	{
		//cout << "circle1" << endl;
		return circle1.getRadius();
	}
	if (circle2.getRadius() > circle3.getRadius() && circle2.getRadius() > circle1.getRadius()) // Executes if circle2 radius is greater than circle1 and circle3
	{
		//cout << "circle2" << endl;
		return circle2.getRadius();
	}
	if (circle3.getRadius() > circle1.getRadius() && circle3.getRadius() > circle2.getRadius()) // Executes if circle3 radius is greater than circle2 and circle1
	{
		//cout << "circle3" << endl;
		return circle3.getRadius();
	}
	return -1; // This will execute if the class object fail all of the above conditions
}

// This function will display the name of the class object whose radius value is equal to "First"
void first(double First, Circle circle1, Circle circle2, Circle circle3)
{
	if (First == circle1.getRadius()) // Executes if "First" is equal to the radius of circle1
	{
		cout << "circle1" << endl;
	}
	else if (First == circle2.getRadius()) // Executes if "Second" is equal to the radius of circle2
	{
		cout << "circle2" << endl;
	}
	else if (First == circle3.getRadius()) // Executes if "Third" is equal to the radius of circle3
	{
		cout << "circle3" << endl;
	}
}

// This function will display the name of the class object whose radius value is equal to "Second"
void second(double Second, Circle circle1, Circle circle2, Circle circle3)
{
	if (Second == circle1.getRadius()) // Executes if "Second" is equal to the radius of circle1
	{
		cout << "circle1" << endl;
	}
	else if (Second == circle2.getRadius()) // Executes if "Second" is equal to the radius of circle2
	{
		cout << "circle2" << endl;
	}
	else if (Second == circle3.getRadius()) // Executes if "Third" is equal to the radius of circle3
	{
		cout << "circle3" << endl;
	}
}

// This function will display the name of the class object whose radius value is equal to "Third"
void third(double Third, Circle circle1, Circle circle2, Circle circle3)
{
	if (Third == circle1.getRadius()) // Executes if "Third" is equal to the radius of circle1
	{
		cout << "circle1" << endl;
	}
	else if (Third == circle2.getRadius()) // Executes if "Third" is equal to the radius of circle2
	{
		cout << "circle2" << endl;
	}
	else if (Third == circle3.getRadius()) // Executes if "Third" is equal to the radius of circle3
	{
		cout << "circle3" << endl;
	}
}


