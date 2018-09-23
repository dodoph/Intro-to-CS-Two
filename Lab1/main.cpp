/******************************************************************************
 **Date: 06-29-2018
 **Description: Main file of lab1. This project prompt user to choose the size
 **of matrix, and then prompt the user to input each number within matrix.
 **Finally, ask user print out the matrix and calculate the determinant.
 ******************************************************************************/

#include<iostream>
#include "determinant.hpp"
#include "readMatrix.hpp"
using std::cout;
using std::cin;
using std::endl;

int main(){
  int size;
  bool matrix = false;
  while (matrix == false){
    cout << "Please enter the size 2 or 3 of the matrix 2x2 or 3x3" << endl;

    /*****************************************************
    *                  input validation
    * This while loop is validating user's input for
    * differet data type before passing the valid integer
    * to next step. 
    *****************************************************/

    while(!(cin >> size)){ 
      cout << "You entered wrong number" << endl;
      cin.clear();  //clear the error state of the buffer
      cin.ignore(100,'\n'); //ignore the rest of line
    }
    
    if(size == 2 || size == 3){ 
      int **array;
      array = new int *[size]; //dynamically allocate the array
      for(int i = 0; i < size; i++){ 
        array[i] = new int[size];
      }
      
      readMatrix(array, size); //call readMatrix function
      
      for(int row = 0; row < size; row++){  //print out the matrix
        for(int col = 0; col < size; col++){
          cout << array[row][col] << " ";
        }
        cout << endl;
      }
      cout << "The determinant is ";
      cout << determinant(array, size) << endl; //print out the result of deteminant
      
      
      for(int row = 0; row < size; row ++) //free allocated menory
        delete [] array[row];
      delete [] array;
      matrix = true;
    }
  }
  return 0;
}

