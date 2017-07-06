/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on June 28, 2017, 11:32 AM
 * Purpose:  Write a program that converts Celsius temperatures to Fahrenheit 
 * temperatures. 
formula is:
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    double Celsius, conversion;

 cout << "Enter Celsius temperature: ";
 cin >> Celsius;

 conversion = (1.8 * Celsius) + 32;

 cout << Celsius << " Celsius = " << conversion << " Fahrenheit \n\n";

    return 0;
}

