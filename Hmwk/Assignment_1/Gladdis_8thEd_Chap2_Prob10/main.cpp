/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on June 25, 2017, 10:30 AM
 * Purpose:  A car holds 15 gallons of gasoline and can travel 375 miles before 
 * refueling. Write a program that calculates the number of miles per gallon the
 * car gets. Display the result on the screen. Use MPG= Miles Driven/Gallons of 
 * Gas Used
 * 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main() 
{
    double gallons = 15; 
    double miles = 375;
    double MPG = miles/gallons;
    cout << "A car that holds " << gallons << " gallons of gasoline and \n"
  << "travels " << miles << " before refueling \n"
  << "gets " << MPG << " MPG \n\n";

    return 0;
}

