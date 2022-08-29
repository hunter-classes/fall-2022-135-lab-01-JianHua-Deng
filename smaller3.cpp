#include <iostream>


/*
Author: JianHua Deng
Course: CSCI-135
Instructor: 
Assignment: Lab 1, Task B

This program asks users for inputs of numbers, and determine which number is the smallest out of all 3 numbers
*/

//Start of main
int main()
{
  //Declare variables
  int first, second, third, smallest;
  
  //Asking users for inputs
  cout << "What's your first number" << endl;
  cin >> first;
  
  cout << "What's your second number" << endl;
  cin >> second;
  
  cout << "What's your third number" << endl;
  cin >> third;

  //Determine which number are the greasted by using simple if statements
  smallest = first;
  
  if(smallest > second){
    smallest = second;
  }//end condition
  
  if(smallest > third){
    smallest = third;
  }//end condition

  cout << endl <<"The smallest of the three number is: " << smallest;

  return 0;
}//end main