/* 
 * File:   main.cpp
 * Author: Stephanie Pascual
 * Created on July 4, 2017, 11:32 AM
 * Purpose:  Write a program that asks for the names of three runners and the
 *  time it took each of them to finish the race.  The program should display 
 * who came in first, second, and third place.
 */

//System Libraries
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()

{
 string runOne, runTwo, runThree;
 float timeOne, timeTwo, timeThree;

 cout << "\n Running the Race \n";

 cout << "Enter the name of first runner: ";
 getline(cin, runOne);
 cout << "Enter time for first runner: ";
 cin >> timeOne;

 if(timeOne <= 0)
 cout << "Only positive times are allowed!\n\n";
 
 cin.ignore();
 cout << "\nEnter the name of second runner: ";
 getline(cin, runTwo);
 cout << "Enter time for second runner: ";
 cin >> timeTwo;

 if(timeTwo <= 0)
 cout << "Only positive times are allowed!! \n\n";

 cin.ignore();
 cout << "\nEnter the name of third runner: ";
 getline(cin, runThree);
 cout << "Enter time for third runner: ";
 cin >> timeThree;

 if(timeThree <= 0)
 cout << "Only positive times are allowed!\n\n";

 cout << "\n Results\n";

 if(timeOne < timeTwo && timeOne < timeThree)
 {
 if(timeTwo < timeThree)
 {
 cout << "First place: " << runOne << endl
  << "Second Place: " << runTwo << endl
  << "Third Place: " << runThree << "\n\n";
 }
 if(timeThree < timeTwo)
 {
 cout << "First place: " << runOne << endl
  << "Second Place: " << runThree << endl
  << "Third Place: " << runTwo << "\n\n";
 }
 }

 if(timeTwo < timeOne && timeTwo < timeThree)
 {
 if(timeOne < timeThree)
 {
 cout << "First place: " << runTwo << endl
  << "Second Place: " << runOne << endl
  << "Third Place: " << runThree << "\n\n";
 }
 if(timeThree < timeOne)
 {
 cout << "First place: " << runTwo << endl
  << "Second Place: " << runThree << endl
  << "Third Place: " << runOne << "\n\n";
 }
 }

 if(timeThree < timeOne && timeThree < timeTwo)
 {
 if(timeOne < timeTwo)
 {
 cout << "First place: " << runThree << endl
  << "Second Place: " << runOne << endl
  << "Third Place: " << runTwo << "\n\n";
 }
 if(timeTwo < timeOne)
 
 cout << "First place: " << runThree << endl
  << "Second Place: " << runTwo << endl
  << "Third Place: " << runOne << endl;
 
 }
 }
  
 
