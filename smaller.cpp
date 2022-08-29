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
  cout << "What's your first number" << endl;
  cin >> first;
  
  cout << "What's your second number" << endl;
  cin >> second;

  //If statement that determine the smallest number
  if(first > second){
    smallest = second;
  }
  else
  {
    smallest = first;
  }//end else

  //printing out the result
  cout << endl <<"The smallest of the two number is: " << smallest;

  return 0;
}//end main