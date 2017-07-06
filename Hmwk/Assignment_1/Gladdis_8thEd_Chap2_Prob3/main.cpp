/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on June 25, 2017, 8:00 AM
 * Purpose:  Write a program that will compute the sales tax on a $95 purchase. Assume the sales tax is 4 percent and the county sales tax is 2 percent.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main() 
{
    double purchase = 95;
    double statetax= .04;
    double countytax= .02;
    double totaltax= statetax + countytax;
    
    cout << "The total sales tax on a $" << purchase << " purchase is: $"
    << totaltax << endl << endl;
   
    system("pause");
    
    return 0;
}

