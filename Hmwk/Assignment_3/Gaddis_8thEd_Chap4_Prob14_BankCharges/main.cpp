/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on July 4, 2017, 11:32 AM
 * Purpose:  Write a program that asks for the beginning balance and the number
 * of checks written.
 */

//System Libraries
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
 int checks;
 float begBal, feeOne, feeTwo, totFees;

 cout << "\nBank Charges\n";

 cout << "Enter beginning balance: $";
 cin >> begBal;

 cout << setprecision(2) << fixed;
 if(begBal < 0)
 cout << "URGENT MESSAGE!! YOUR ACCOUNT IS OVERDRAWN!! \n\n";
 else
 {
 cout << "Enter number of checks written: ";
 cin >> checks;
 
 if(begBal < 400)
 feeOne = 15.00;
 else
 feeOne = 0.00;

 if(checks >= 0 && checks < 20)
 feeTwo = checks * 0.10;
 if(checks >= 20 && checks <= 39)
 feeTwo = checks * 0.08;
 if(checks >= 40 && checks <= 59)
 feeTwo = checks * 0.06;
 if(checks >= 60)
 feeTwo = checks * 0.04;
 if(checks < 0)
 cout << "The number of checks cannot be negative. \n\n";

 totFees = feeOne + feeTwo + 10;


 cout << "Low Balance fee: $" << feeOne << endl;
 cout << "Check fees: $" << feeTwo << endl;
 cout << "Total Monthly fees: $" << totFees << endl;
 }
    return 0;
}

