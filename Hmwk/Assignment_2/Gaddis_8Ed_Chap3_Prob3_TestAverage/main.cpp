/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on June 27, 2017, 11:32 AM
 * Purpose:  Write a program that asks for five test scores. The program should
 * calculates the average test score and display it. The number displayed 
 * should be formatted in fixed -point notation with one decimal point of 
 * precision. 
 */

//System Libraries
#include <iostream>
#include <iomanip>//Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    double first, second, third, fourth, fifth, average;
    
    cout << "This program calculates the average of test scores.\n";
            
            cout << "Enter first test score: ";
            cin >> first;
            
            cout << "Enter second test score: ";
             cin >> second;
             
            cout << "Enter third test score: ";
             cin >> third;
             
            cout << "Enter fourth test score: ";
            
             cin >> fourth;
             
            cout << "Enter fifth test score: ";
            
             cin >> fifth;
             
            average = (first + second + third + fourth + fifth)/2;
            
            cout << setprecision(1) << fixed ;
                    
                    cout << "The average is " << average << endl;
             
    return 0;
}

