/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on July 3, 2017, 11:32 AM
 * Purpose:  Write a program that asks the user to enter a month (in numeric 
 * form), a day, and a two-digit year.  The program should then determine whether
 *  the month times the day is equal to the year.  If so, it should display a 
 * message saying the date is magic. Otherwise it should display a message saying 
 * the date is not magic.
 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    int month, day, year;
   cout << "Enter a month (numeric form):";
   cin >> month;
   
    cout << "Enter a day:";
    cin >> day;
            
           cout << "Enter a two digit year:";
    cin >> year;
    
    if(month * day == year)
 cout << "The date is magic \n\n";
 else
 cout << "The date is not magic \n\n";

            
    return 0;
}

