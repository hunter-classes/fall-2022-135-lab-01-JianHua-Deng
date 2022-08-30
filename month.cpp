#include <iostream>


/*
Author: JianHua Deng
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 1, Task D

This program asks user for a specific year and month, and prints the amount of day within that month
*/

//start of main
int main()
{

//Declaring necessary variables
  int year, month, even, odd, february;
  bool common;
  //if the month is divisable by 2 then it would have 30 days, otherwise it will have 31 days
  even = 30;
  odd = 31;
  //in common year, there will only be 28 days in February, and 29 in leap year
  february = 28;
    
//Asking users for inputs
  std::cout << "What's the year?" << std::endl;
  std::cin >> year;

  std::cout << "What's the month?" << std::endl;
  std::cin >> month;

//Check if the given year is a leap or a common year
//Pretty much just copied and pasted the code from task C, leap.cpp
  if(year % 4 != 0){
    common = true;
  }else if(year % 100){
    common = false;
  }else if(year % 400){
    common = true;
  }else{
    common = false;
  }//end of all conditions

//Checking how many days are within that month given that we know if the year is a leap or a common year
//If it is a leap year, then there will be total of 366 day, and the extra day will be added to February
//If the Month is not divisable by 2 then it'll be 31 days, and 30 otherwise in a common year
  
  //if it is a leap year and it's February
  if((!common) && (month ==2)){
    std::cout << "There's " << (february + 1) << " days in this Month."<< std::endl;
  }else if(month == 2)/*if it is a common year and in february */{
    std::cout << "There's " << february << " days in this Month."<< std::endl;
  }else{
    //This sets of conditions determines days within a month outside of february
    if(month % 2 != 0){
      std::cout << "There's " << odd << " days in this Month."<< std::endl;
    }else{
      std::cout << "There's " << even << " days in this Month."<< std::endl;
    }//end conditions
  }//end of all conditions

  return 0;
}//end main