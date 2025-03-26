// Chapter 4 Programming Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This code calculates the number of days in a specified month when provided a month and year as integer values.


#include <iostream>

using namespace std;

bool LeapYear(int Year) {
	return (Year % 4 == 0 && (Year % 100 != 0 || Year % 400 == 0));
}

int main()
{
	int Month;
	int Year;
	int DaysInMonth;

   cout << "Enter a month (1-12):\n";
   cin >> Month;
   cout << "Enter a year:\n";
   cin >> Year;

   if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12)
   {
	   DaysInMonth = 31;
   }
   else if (Month == 4 || Month == 6 || Month == 9 || Month == 11)
   {
	   DaysInMonth = 30;
   }
   else if (Month == 2)
   {
	   if (LeapYear (Year)) {
		   DaysInMonth = 29; 

	   }
	   else {
		   DaysInMonth = 28;
	   }
   }
   else {
	   cout << "Invalid Entry. Please enter a month (1-12) and year as integer values." << endl;
	   return 1;
   }
   cout << "Number of Days in Selected Month:";
   cout << DaysInMonth;


   return 0;
}

