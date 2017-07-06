/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on July 3, 2017, 11:32 AM
 * Purpose:  Write a program that asks the user to enter two numbers. The 
 * program should use the conditional operator to determine which number is 
 * the smaller and which is the larger.
 */

//System Libraries

    
#include<iostream>

using namespace std;

int main()

{
    
 int num1, num2;

 cout << "Enter two numbers: ";
 cin >> num1 >> num2;

 if(num1 > num2)
 cout << "The larger number is: " << num1 << endl << endl;
 
 else
     
 cout << "The larger number is: " << num2 << endl << endl;


 if(num1 > num2)
 cout<< "The smaller number is: " << num2<< endl << endl;
 else 
cout<< "The smaller number is: " << num1<< endl << endl;

    return 0;
    
}

