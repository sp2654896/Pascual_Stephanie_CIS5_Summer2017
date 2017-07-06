/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on June 25, 2017, 1:00 PM
 * Purpose:  To get the average of a series of values, you add the values up and
 *  then divide the sum by the number of values. Write a program that stores the
 *  following values in five different variables: 28,32,37,24. and 33. The 
 * program should first calculate the sum of these five variables and store the 
 * result in a separate variable named sum. Then, the program should divide the 
 * sum variable by 5 to get the average. Display the average on the screen.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    int val_one = 28, val_two = 32, val_three = 37, val_four = 24, val_five = 33;
    int sum = val_one + val_two + val_three + val_four + val_five;  //the sum of the values
    double average = sum/5;  //to get the average
    
    cout << "The sum of " << val_one << " + " << val_two << " + " << val_three
  << " + " << val_four << " + " << val_five << " = " << sum << endl;
    
 cout << "The average is: " << average << endl << endl;
    
    return 0;
}

