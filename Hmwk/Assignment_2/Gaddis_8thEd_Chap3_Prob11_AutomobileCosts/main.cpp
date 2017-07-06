/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on June 28, 2017, 11:32 AM
 * Purpose:  Write a program that asks the user to enter the monthly costs for
 *  the following expenses incurred from operating his or her automobile: loan
 *  payment, insurance,gas, oil, tires, and maintenance.  The program should 
 * then display the total monthly cost of these expenses,
 *  and the total annual cost of these expenses.
*/

//System Libraries
#include <iostream> 
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

int main() 
   {
 double loanPayment, insurance, gas, oil, tires, maintenance;
 double monthlyTotal, annualTotal;
cout << "This program caclulates your monthly and total cost of expenses.\n";

 cout << "Enter monthly loan payment: ";
 cin >> loanPayment;
 cout << "Enter monthly insurance: ";
 cin >> insurance;
 cout << "Enter monthly gas expense: ";
 cin >> gas;
 cout << "Enter monthly oil expenses: ";
 cin >> oil;
 cout << "Enter monthly tires expenses: ";
 cin >> tires;
 cout << "Enter monthly maintenance expenses: ";
 cin >> maintenance;

 monthlyTotal = loanPayment + insurance + gas + oil + tires + maintenance;
 annualTotal = monthlyTotal * 12;

 cout << setprecision(2) << fixed;
 
 cout << "Your total monthly expenses are: $" << monthlyTotal << endl;
 cout << "Your total  annual expenses are: $" << annualTotal << endl << endl;
    return 0;
}

