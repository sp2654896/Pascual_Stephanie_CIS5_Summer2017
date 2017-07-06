/* 
 * File:   main.cpp
 * Author: Stephanie Pascual    
 * Created on June 27, 2017, 11:32 AM
 * Purpose:  Write a program that calculates the average rainfall for three 
 * months. The program should ask the user to enter the name of each  month such 
 * as June or July, and the amount of rain(in inches) that fell each month. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<iomanip>
#include<string>

using namespace std;

int main()
{
 string month1, month2, month3;
 double rain1, rain2, rain3;
 double average;
 
    cout << "This program calculates the average rainfall for three months.\n";
   
    cout << "Enter name of month:";

    cin >> month1;

    cout << "Enter the rainfall (in inches):";
     
    cin >> rain1;
     
      cout<< "Enter name of month:";
      
      cin >> month2;
      
     cout << "Enter the rainfall (in inches):";
    
     cin >> rain2;  
       
    cout << "Enter name of month:";
    
        cin >> month3;
        
       cout << "Enter the rainfall (in inches):";
       
       cin >> rain3;
       
    average = (rain1+ rain2 + rain3) / 3;
            
    cout << setprecision(2) << fixed;
            cout << "The average rainfall for " << month1 << ", "<< month2 << ", and " << month3 << " is: " << average << endl << endl;
   
    return 0;
}

