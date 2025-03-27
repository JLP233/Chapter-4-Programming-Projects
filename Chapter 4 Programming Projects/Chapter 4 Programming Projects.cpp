// Chapter 4 Programming Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This code calculates the shipping charges of packages based on parcel weight (kg) and shipping distance in miles.


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main()
{
	int FunctionChoice;
	float AreaOfShape;
	float CircleRadius;
	float RectangleLength;
	float RectangleWidth;
	float TriangleBase;
	float TriangleHeight;


	cout << "Geometry Calculator:\n";
	cout << "1. Calculate the Area of a Circle\n";
	cout << "2. Calculate the Area of a Rectangle\n";
	cout << "3. Calculate the Area of a Triangle\n";
	cout << "4. Quit\n";
	cout << "Enter your choice(1-4):\n";
	cin >> FunctionChoice;


	if (FunctionChoice == 1)
	{
		cout << "Calculate the Area of a Circle\n";
		cout << "Enter circle radius:\n";
		cin >> CircleRadius;
		if (CircleRadius >= 0)
		{
			AreaOfShape = CircleRadius * CircleRadius * 3.14159;
		}

		else
		{
			cout << "Input Error.You must enter a positive value.\n";
			return 1;
		}
	}

	else if (FunctionChoice == 2)
	{
		cout << "Calculate the Area of a Rectangle\n";
		cout << "Enter rectangle length:\n";
		cin >> RectangleLength;
		cout << "Enter rectangle width:\n";
		cin >> RectangleWidth; 
		if (RectangleLength >= 0 && RectangleWidth >= 0)
		{
			AreaOfShape = RectangleLength * RectangleWidth; 
		}

		else
		{
			cout << "Input Error.You must enter a positive value.\n";
			return 1;
		}
	}

	else if (FunctionChoice == 3)
	{
		cout << "Calculate the Area of a Triangle\n";
		cout << "Enter triangle base length:\n";
		cin >> TriangleBase;
		cout << "Enter triangle height:\n";
		cin >> TriangleHeight;
		if (TriangleBase <= 0 || TriangleHeight <= 0)
		{
			cout << "Input Error.You must enter a positive value.\n";
			return 1;
		}

		else
		{
			AreaOfShape = TriangleBase * TriangleHeight * .5;
		}
	}

	else if (FunctionChoice == 4)
	{
		cout << "Goodbye";
		return 0;
	}

	else
	{
		cout << "Invalid selection. Please pick an option 1-4.\n";

	}
	if (AreaOfShape > 0)
	{
	cout << "Area of shape:\n";
	cout << AreaOfShape;
}
	else
	{
		cout << "Error.Please Try Agian.";
		return 1;
	}

   return 0;
}

