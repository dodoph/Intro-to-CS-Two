/**************************************************
 **Date: 06-29-2018
 **Description: Implementation file of determinant
 **************************************************/

#include "determinant.hpp"

/*************************************************
 **        Determinant Function
 **This function is to calculate and return the
 **determinant by passing a pointer to 2D array 
 **and size
 *************************************************/

int determinant(int** array, int size){
  int result;
  if(size == 2){
    result = array[0][0]*array[1][1] - array[0][1]*array[1][0];
  }
  else{
    result = array[0][0]*(array[1][1]*array[2][2] - array[1][2]*array[2][1]) - array[0][1]*(array[1][0]*array[2][2] - array[1][2]*array[2][0]) + array[0][2]*(array[1][0]*array[2][1] - array[1][1]*array[2][0]);
  }
  return result;   
}

