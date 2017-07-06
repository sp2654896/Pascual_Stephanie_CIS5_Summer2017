/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on July 3, 2017, 11:32 AM
 * Purpose:  Write a program that calculates and displays a person's body mass 
 * index (BMI).The program should display a message indicating whether the 
 * person has optimal weight, is underweight, or is overweight.  
 */

//System Libraries
#include <iostream> 


using namespace std; 

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main()
{
    int weight, height, BMI;
 cout << "Enter your weight (in pounds): ";
 cin >> weight;
 
 cout << "Enter your height (in inches): ";
 cin >> height;

 BMI = (((weight * 703) )/ (height*height));

 if(BMI < 18.5)
 cout << "You are underweight";
 if(BMI >= 18.5 and BMI <= 25)
 cout << "You are in optimal shape";
 if(BMI > 25)
 cout << "You are overweight";

    return 0;
}

