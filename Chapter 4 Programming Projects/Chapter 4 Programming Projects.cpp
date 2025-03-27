// Chapter 4 Programming Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This code calculates the shipping charges of packages based on parcel weight (kg) and shipping distance in miles.


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main()
{
	float PackageWeight;
	float MilesToBeShipped;
	int TotalMileageRateMultipler;
	float TotalCostToShip;

	
   cout << "Enter package weight (kg):\n";
   cin >> PackageWeight;
   cout << "Enter number of miles package needs to be shipped (mi):\n";
   cin >> MilesToBeShipped;

   if ( MilesToBeShipped >= 10 && MilesToBeShipped <= 3000)
   {
	   TotalMileageRateMultipler = (ceil(MilesToBeShipped / 500));
   }
   else {
	   cout << "Please enter a mileage over 10 and under 3000.";
	   return 1;
   }

   if (PackageWeight <= 2 && PackageWeight >= 0)
   {
	   TotalCostToShip = TotalMileageRateMultipler * 1.1;
   }
   else if (PackageWeight >= 2 && PackageWeight <= 6)
   {
	   TotalCostToShip = TotalMileageRateMultipler * 2.2;
   }
   else if (PackageWeight >= 6 && PackageWeight <= 10)
   {
	   TotalCostToShip = TotalMileageRateMultipler * 3.7;
   }
   else if (PackageWeight >= 10 && PackageWeight <= 20)
   {
	   TotalCostToShip = TotalMileageRateMultipler * 4.8;
   }
   else {
	   cout << "Package exceeds 20kg weight limit." << endl;
	   return 1;
   }

   
   cout << "Total Cost to Ship: \n";
   cout << "$";
   cout << setprecision(2) << TotalCostToShip;




   return 0;
}

