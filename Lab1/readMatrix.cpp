/************************************************
**Date: 06-29-2018
**Description: Implementation file of readMatrix
*************************************************/

#include<iostream>
#include "readMatrix.hpp"
using std::cout;
using std::cin;
using std::endl;

/*********************************************************
 **            readMatrix Function
 **This function takes two parameter: a pointer to 2D array
 ** and the size of matrix and asks user input the number 
 **within the matrix.
 *********************************************************/

void readMatrix(int** array, int size){
  cout << "Please enter each number within the matrix" << endl;
  for(int row = 0; row < size; row++){
    for(int col = 0; col < size; col++){
      cin >> array[row][col];
    }
  }
}
