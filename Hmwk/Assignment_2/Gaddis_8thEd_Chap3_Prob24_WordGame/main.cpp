/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on June 27, 2017, 11:32 AM
 * Purpose:  Write a program that plays a word game with the user.  
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; 

int main() 
{
    string Name, City, College, Profession, Animal, PetName;
 double Age;

 cout << "Enter your name: ";
 getline(cin, Name);
 cout << "Enter your age: ";
 cin >> Age;
 cin.ignore();
 cout << "Enter the name of a city: ";
 getline(cin, City);
 cout << "Enter the name of a college: ";
 getline(cin, College);
 cout << "Enter a profession: ";
 getline(cin, Profession);
 cout << "Enter a type of animal: ";
 getline(cin, Animal);
 cout << "Enter a pet's name: ";
 getline(cin, PetName);

 cout << "\n\n______________________________\n"
  << "           Word Game"
  << "\n__________________________________\n\n";

 cout << "There once was a person named " << Name << " who lived in " << City
  << ". At the age of \n" << Age << ", " << Name << " went to college at " 
  << College << ".  " << Name << " graduated and went to work \n"
  << "as a " << Profession << ".  Then, " << Name << " adopted a(n) "
  << Animal << " named " << PetName << ".  They, \nboth lived happily "
  << "ever after! \n\n";
 
    return 0;
}

