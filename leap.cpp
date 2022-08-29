#include <iostream>


/*
Author: JianHua Deng
Course: CSCI-135
Instructor: 
Assignment: Lab 1, Task C

This program asks user for a specific year and determine if the year is a leap year or a common year
*/

int main()
{
  //Declaring variables
  int year;

  //Asking users for inputs
  cout << "What's the year?" << endl;
  cin >> year;

  //Using % to determine if the year is a leap year or a common year
  //Pretty much just did exactly what the pseudocode saids XD
  
  if(year % 4 != 0){
    cout << "This is a common year";
  }else if(year % 100){
    cout << "This is a leap year";
  }else if(year % 400){
    cout << "This is a common year";
  }else{
    cout << "This is a leap year";
  }//end of all conditions
  
  return 0;
}//end main