/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on June 25, 2017, 11:32 AM
 * Purpose:  Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip amount, and total bill on the screen. 
 * 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main() 
{
    double meal = 88.67;
    double tax = 0.0675 * meal; //6.75% tax on the meal
    double tip = (tax + meal)*0.20; //tip is 20% after adding the tax
    double total = meal + tax + tip;  //total bill
       
 cout << "The meal charge is: $" << meal << endl;
 cout << "The tax amount is: $" << tax << endl;
 cout << "The tip amount is: $" << tip << endl;
 cout << "The total bill is: $" << total << endl << endl;
 
    return 0;
}

