/* 
 * File:   main.cpp
 * Author: Stephanie Pascual    
 * Created on June 29, 2017, 11:32 AM
 * Purpose:  The Yukon Widget Company manufactures widgets that weight 12.5 pounds each.
Write a program that calculates how many widgets are stacked on a pallet, based on
the total weight of the pallet.  The program should ask the user how much the pallet
weighs by itself and with the widgets stacked on it.  It should then calculate
and display the number of widgets stacked on the pallet.
 */

//System Libraries
#include <iostream> 
#include <iomanip>

using namespace std; //Name-space under which system libraries exist

int main()
{
    double widgetWeight = 12.5; 
 double palletEmpty, palletWeight;
 double widgetNumber;
 cout << "This program calculates the number of widgets stacked on the pallet\n";
 cout << "How much does the empty pallet weigh (pounds): ";
 cin >> palletEmpty;
 cout << "How much does the pallet weigh (with widgets): ";
 cin >> palletWeight;

 widgetNumber = (palletWeight - palletEmpty) / 12.5;

 cout << "\n*****************************\n";
 cout << "There are: " << widgetNumber << " widgets on the pallet. \n\n";
    return 0;
}

