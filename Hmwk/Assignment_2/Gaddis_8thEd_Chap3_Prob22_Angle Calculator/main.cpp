/* 
 * File:   main.cpp
 * Author: Stephanie Pascual    
 * Created on June 28, 2017, 11:32 AM
 * Purpose:  Write a program that asks the user for an angle, entered in radians.  
 * The program should then display the sine, cosine, and tangent of the angle. 
 * (Use the sin, cos,and tan library functions to determine these values). 
 *  The output should be displayed in fixed-point notation, rounded to four 
 * decimal places of precision.
 */

//System Libraries
#include <iostream> 
#include <iomanip>
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main() 
{
   double angle, sine, cosine, tangent;
   
cout << " This program calculates sine, cosine and tangent of an angle.\n";
 cout << "\n----------------------------\n"
  << "    Angle Calculator"
  << "\n----------------------------\n";

 cout << "Enter an angle (in radians): ";
 cin >> angle;

 sine = sin(angle);
 cosine = cos(angle);
 tangent = tan(angle);

 cout << "\n----------------------------\n";
 cout << setprecision(4) << fixed;
 cout << "The sine is: " << sine << endl;
 cout << "The cosine is: " << cosine << endl;
 cout << "The tangent is: " << tangent << "\n\n";
 
    return 0;
}

