/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on June 14, 2017, 11:32 AM
 * Purpose:  Calculate the percentage Gas Tax on a gallon of gas, and the 
 * percentage profit made from a gallon of gas given
 */

//System Libraries
#include <iostream>  
#include <iomanip>

using namespace std; 


int main()
{
    double cost,totaltaxes, totalamount, percentagetax, profit, percentageprofit;
    
    
 cout << "This program calculates the percentage Gas Tax on a gallon of "
         "gas,and the percentage profit made from a gallon of gas given.\n"; 
 /*
 39 cents for excise tax/gallon
 8% sales tax
 10 cents for cap and trade “fee”—tax on a tax/gallon
 18.4 cents federal excise tax/gallon
  all taxes except sales=67.4 cents=.674
  profit=  7 cents/gallon oil company profit=.07
 */           
             cout << "Enter cost per gallon of gas: ";
            cin >> cost;
           
            totaltaxes = (.08 * cost) + .674;
            totalamount = cost;
            percentagetax = totaltaxes/totalamount*100; 
            profit = .07;
            percentageprofit = profit/totalamount*100;
   
     cout << "  The percentage of gas tax on a gallon of gas is " << percentagetax << endl;
      cout << "The percentage of profit made from a gallon of gas is" << percentageprofit << endl;
    return 0;
}

