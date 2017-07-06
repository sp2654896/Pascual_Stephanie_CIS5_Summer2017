/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on June 25, 2017, 11:32 AM
 * Purpose:  One acre of land is equivalent to 43,560 square feet. Write a 
 * program that calculates the number of acres in a tract of land with 391,876 
 * square feet.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main() 
{
    double land = 391876;
    double acre = 43560;
    double conversion = land / acre;
     cout << land << " sq ft = " << conversion << " acres \n\n";
    return 0;
}

