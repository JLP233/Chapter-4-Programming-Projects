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
	   AreaOfShape = CircleRadius * CircleRadius * 3.14159;
   }

   else if (FunctionChoice == 2)
   {
	   cout << "Calculate the Area of a Rectangle\n";
	   cout << "Enter rectangle length:\n";
	   cin >> RectangleLength;
	   cout << "Enter rectangle width:\n";
	   cin >> RectangleWidth; 
	   AreaOfShape = RectangleLength * RectangleWidth;
   }

   else if (FunctionChoice == 3)
   {
	   cout << "Calculate the Area of a Triangle\n";
	   cout << "Enter triangle base length:\n";
	   cin >> TriangleBase;
	   cout << "Enter triangle height:\n";
	   cin >> TriangleHeight;
	   AreaOfShape = TriangleBase * TriangleHeight * .5;
   }

   else if (FunctionChoice == 4)
   {
	   cout << "Goodbye";
   }

   else 
   {
	   cout << "Invalid selection. Please pick an option 1-4.\n";
	   
   }

   cout << "Area of shape:\n";
   cout << AreaOfShape;

   return 0;
}

