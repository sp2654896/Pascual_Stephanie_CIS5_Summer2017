/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on June 25, 2017, 7:30 PM
 * Purpose:  The East Coast sales division of a company generates 58 percent of total sales. Based on that percentage, write a program that will predict how much the East Coast division  will generate if the company has $8.6 million in sales this year.
 */

//System Libraries
#include <iostream> 
using namespace std; 

int main()
{
    double salesdiv=0.58; //58 percent
    double salescomp=8.6; //8.6 million
    double division= salesdiv * salescomp;
 //display the total sales from the sales division
    cout << "The total sales generated by the sales division is: $" << division << " million " << endl << endl;

    return 0;
}

