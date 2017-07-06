/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on June 24, 2017, 11:00 AM
 * Purpose:  An electronics company sells circuit boards at a 35 percent profit. 
 * Write a program that calculates the selling price of a circuit board that costs
 * $14.95. Display the result on the screen.
*/

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main() 
{
    double basePrice = 14.95;
    double sellPrice = (basePrice*0.35) + basePrice;
    cout << "The selling price of a circuit board is: $"
  << sellPrice << endl << endl;
  
    return 0;
}

