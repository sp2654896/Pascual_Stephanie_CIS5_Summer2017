/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on June 27, 2017, 11:32 AM
 * Purpose:  A bag of cookies holds 30 cookies. The calorie information on the bag
 * claims that there are 10 "servings" in the bag and that a serving equals 300
 * calories. Write a program that asks the user to input how many cookies he or she 
 * actually ate and then reports how many total calories were consumed.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    double cookies, totalCalories;
             
   cout << "This program calculates total calories consumed.\n";
  

 cout << "Enter the number of cookies you ate: ";
 
 cin >> cookies;

 /*
 Reference :
 30 cookies in a bag = 10 servings
 3 cookies = 1 serving = 300 calories
 So, 1 cookie = 100 calories
 */

 totalCalories = cookies * 100;

 cout << "You consumed: " << totalCalories << " calories! \n\n";


    return 0;
}

