#include <iostream>


/*
Author: JianHua Deng
Course: CSCI-135
Instructor: 
Assignment: Lab 1, Task C

This program asks user for a specific year and return if the year is a leap year or a common year
*/

int main()
{
  //Declaring variables
  int year;

  //Asking users for inputs
  std::cout << "What's the year?" <<std::endl;
  std::cin >> year;

  //Using % to determine if the year is a leap year or a common year
  //Pretty much just did exactly what the pseudocode saids XD
  
  if(year % 4 != 0){
   std::cout << "This is a common year" << std::endl;
  }else if(year % 100){
    std::cout << "This is a leap year" << std::endl;
  }else if(year % 400){
    std::cout << "This is a common year" << std::endl;
  }else{
    std::cout << "This is a leap year" << std::endl;
  }//end of all conditions
  
  return 0;
}//end main