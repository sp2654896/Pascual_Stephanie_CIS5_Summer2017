/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on July 4, 2017, 11:32 AM
 * Purpose:  Write a program that asks the user to enter the number of books
 * that he or she has purchased this month and then display the number of points awarded.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    int books, points;
    
     cout << "Enter the number of book(s) purchased this month: ";
 cin >> books;

 if(books == 0)
 {
 points = 0;
 cout << "You have earned: " << points << " points";
 }
 if(books == 1)
 {
 points = 5;
 cout << "You have earned: " << points << " points";
 }
 if(books ==2)
 {
 points = 15;
 cout << "You have earned: " << points << " points";
 }
 if(books ==3)
 {
 points = 30;
 cout << "You have earned: " << points << " points";
 }
 if(books >= 4)
 {
 points = 60;
 cout << "You have earned: " << points << " points";
 }

 {
 if(books < 0)
 cout << "Number of books cannot be negative!";
 }

    return 0;
}

