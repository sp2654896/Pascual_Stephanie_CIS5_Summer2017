/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on July 4, 2017, 11:32 AM
 * Purpose: Create a change-counting game that gets the user to enter the number 
 * of coins required to make exactly one dollar.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; 
int main()

{
    int pennies, nickels, dimes, quarter, total;
    
    cout << "Enter the number of pennies:";
    cin >> pennies;
    cout << "Enter the number of nickels:";
    cin >> nickels;
    cout << "Enter the number of dimes:" ;
    cin >> dimes;
    cout << "Enter the number of quarters:";
    cin >> quarter;
    
    total = pennies + nickels*5 + dimes*10 + quarter*25;
     
            if(total == 100)
            {                       
 cout << "Congratulations!You entered exactly one dollar";
            }

            
 if(total< 100 && total> 0)
 {
 cout << "You entered less than one dollar.";    
 }
    
 if(total > 100)
 cout << "You entered more than one dollar.";
 
    return 0;

}


       
    


