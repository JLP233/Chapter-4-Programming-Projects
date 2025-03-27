// Chapter 4 Programming Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This code calculates the shipping charges of packages based on parcel weight (kg) and shipping distance in miles.


#include <iostream>

using namespace std;


int main()
{
	float PackageWeight;
	float MilesToBeShipped;
	float TotalCostToShip;

	
   cout << "Enter package weight (kg):\n";
   cin >> PackageWeight;
   cout << "Enter number of miles package needs to be shipped (mi):\n";
   cin >> MilesToBeShipped;

   if (PackageWeight <= 2 && PackageWeight >= 0)
   {
	   MilesToBeShipped * 1.1 = TotalCostToShip;
   }
   else if (PackageWeight >= 2 && PackageWeight <= 6)
   {
	   MilesToBeShipped * 2.2 = TotalCostToShip;
   }
   else if (PackageWeight >= 6 && PackageWeight <= 10)
   {
	   MilesToBeShipped * 3.7 = TotalCostToShip;
   }
   else if (PackageWeight >= 10 && PackageWeight <= 20)
   {
	   MilesToBeShipped * 4.8 = TotalCostToShip;
   }
   else {
	   cout << "Package exceeds 20kg weight limit." << endl;
	   return 1;
   }


   cout << "Total Cost to Ship";
   cout << "$" << TotalCostToShip;


   return 0;
}

