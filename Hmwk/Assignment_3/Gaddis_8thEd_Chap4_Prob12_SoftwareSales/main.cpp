/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on July 4, 11:32 AM
 * Purpose:  Write a program that asks for the number of units sold and computes 
 * the total cost of the purchase.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<iomanip>

using namespace std; //Name-space under which system libraries exist

int main()
{
     int units, subtot, total;

 cout << "Enter number of units sold: ";
 cin >> units;
 
cout << setprecision(2)<< fixed;

 if(units > 0 && units < 10)
 {
 total = units * 99;
 cout << "The total is:$" << total << endl;
 }
 
 if(units >= 10 && units <= 19)
 {
 subtot = (units * 99) * 0.20;
 total = (units * 99) - subtot;
 cout << "The total is: $" << total << endl;
 }
 
 
 if(units >= 20 && units <=49)
 {
 subtot = (units * 99) * 0.30;
 total = (units * 99) - subtot;
 cout << "The total is: $" << total << endl;
 }
 
 if(units >= 50 && units <= 99)
 {
 subtot = (units * 99) * 0.40;
 total = (units * 99) - subtot;
 cout << "The total is: $" << total << endl;
 }

 
 if(units >= 100)
 {
 subtot = (units * 99) * 0.50;
 total = (units * 99) - subtot;
 cout << "The total is: $" << total << endl;
 }

if(units <=0)
{
 cout << "The number of units has to be greater than 0";
}
    return 0;
}

