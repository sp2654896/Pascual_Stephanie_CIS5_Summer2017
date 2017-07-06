/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on July 3, 2017, 11:32 AM
 * Purpose:  Write a program that asks the user to enter an object's mass, and 
 * then calculates and displays its weight. If the object weighs more than 1,000 
 * newtons, display a message indicating that it is too heavy.  If the object 
 * weighs less than 10 newtons, display a message indicating that the object is 
 * too light.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    int mass, weight;

 cout << "Enter an object's mass (in kilograms): ";
 cin >> mass;

 weight = mass * 9.8;

 if(weight > 1000)
 {
 cout << "The mass is: " << weight << " newtons. ";
 cout << "The object's mass is too heavy";
 }
 if(weight < 10)
 {
 cout << "The mass is: " << weight << " newtons ";
 cout << "The object's mass is too light";
 }
 
 if(weight >=10 && weight <=1000)
 cout << "The mass is: " << weight << " newtons";
    return 0;
}

