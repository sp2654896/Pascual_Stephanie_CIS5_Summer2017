/* 
* File:   main.cpp
 * Author: Stephanie Pascual
 * Created on June 29, 2017, 11:32 AM
 * Purpose:  Many financial experts advise that property owners should insure 
 * their homes or buildings for at least 80% of the amount it would cost to 
 * replace the structure. Write a program that asks the user to enter the 
 * replacement cost of a building and then displays the minimum amount of 
 * insurance he or she should buy for the property.
*/

#include <iostream>  

using namespace std; 



int main()
 {
    double replacementCost;
cout << "This program calculates the minimum amount of insurance you should buy for a property\n";

 cout << "******************************\n"
  << "Minimum insurance recommended \n"
  << "******************************\n";

 cout << "Enter the replacement cost of your building: ";
 cin >> replacementCost;

 cout << "The Minimum insurance you should buy is: $" << replacementCost * 0.80 << endl << endl;
    return 0;
}

