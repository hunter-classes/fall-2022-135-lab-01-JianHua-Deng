#include <iostream>


/*
Author: JianHua Deng
Course: CSCI-135
Instructor: 
Assignment: Lab 1, Task A

This program asks users for inputs of numbers, and determine which number is the smallest
*/
//Starts of main
int main(){

  //declare variables
  int first, second, smallest;
  
  //Asking users for inputs
  std::cout << "What's your first number" << std::endl;
  std::cin >> first;
  
  std::cout << "What's your second number" << std::endl;
  std::cin >> second;

  //If statement that determine the smallest number
  if(first > second){
    smallest = second;
  }
  else
  {
    smallest = first;
  }//end else

  //printing out the result
  std::cout << std::endl <<"The smallest of the two number is: " << smallest << std::endl;

  return 0;
}//end main