/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on June 3, 2017, 11:32 AM
 * Purpose:  The area of a rectangle is the rectangle's length times its width.  
Write a program that asks for the length and width of two rectangles.  The 
 * program should tell the user which rectangle has the greater are, or if the 
 * areas are the same.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist


int main()
{
    int length1, length2, width1, width2, area1, area2;


 cout << "Enter the length for rectangle 1: ";
 cin >> length1;
 cout << "Enter the width for rectangle 1: ";
 cin >> width1;
 cout << "Enter the length for rectangle 2: ";
 cin >> length2;
 cout << "Enter the width for rectangle 2: ";
 cin >> width2;

 area1 = length1 * width1;
 area2 = length2 * width2;

 if(area1 > area2)
 cout << "The area of rectangle 1 is greater than the area of rectangle 2";
 else if(area2 > area1)
 cout << "The area of rectangle 2 is greater than the area of rectangle 1";
 else if(area1==area2)
 cout << "The area of both rectangles is the same.";

    return 0;
}

