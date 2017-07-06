/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on June 28, 2017, 9:32 AM
 * Purpose:  Write a program that calculates a car's gas mileage. The program 
 * should ask the user to enter the number of gallons of gas the car can hold and
 * the number of miles it can be driven on a full tank.It should then display 
 * the number of miles that may be driven per gallon of gas.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main() 
{
    int capacity, miles, average;
    
    cout << "This program calculates a ";
    cout<< "car's gas mileage .\n";
    cout << "Enter number of gallons of gas";
    
    cin >> capacity;
    
    cout << "Enter number of miles it can be driven";
    
    cin >> miles ;
    
    average= miles/capacity ;
    
     cout << "The car's MPG is: " << average << endl << endl;
     
      return 0;

}

