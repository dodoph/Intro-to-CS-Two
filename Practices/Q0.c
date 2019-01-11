/* CS261- Assignment 1 - Q. 0*/
/* Name: Qiaojie Tang
 * Date: 01-11-2019
 * Solution description: 
 * 1. In the main() function, declare an integer, x. Then assign it to a random integer value in the interval [0, 10]. 
   Then print the value and address (using the address of operator) of x.

 * 2. In fooA(int * iptr) function, print the value of the integer pointed to by iptr and the address pointed to by iptr. 
   Change the value of the integer pointed to by iptr as instructed in the skeleton code. Print the address of iptr itself at the end.

 * 3. In the main() function, following the call to fooA(..), print the value of x. 
   Answer the following question in a comment right after printing the value of x: 
   Is the value of x different than the value that was printed at first? Why or why not?

 * 4. In fooB(int * jptr) function, print the value of the integer pointed to by jptr and the address pointed to by jptr. 
   Then change the address pointed to by jptr as instructed in the skeleton code. Print the address of jptr itself at the end.
 
 * 5. In the main function, following the call to fooB(..), print the value and address of x. 
   Answer the following question in a comment right after printing the value and address of x:
   Are the value and address of x different than the value and address that were printed before the call to fooB(..)? Why or why not?
 */
 
#include <stdio.h>
#include <stdlib.h> /*for rand() */
#include <time.h> /*for time()*/

void fooA(int* iptr){
  
    /*Print the value and address of the integer pointed to by iptr*/
    printf("The value of the integer pointed to by iptr is %d and the address is %p\n", *iptr, iptr);   
    /*Increment the value of the integer pointed to by iptr by 5*/
    *iptr+=5;
    /*Print the address of iptr itself*/
    printf("The address of iptr itself is %p\n", &iptr);
    /*Dummy variable, ignore the warning*/
    int c=5;
  
}


void fooB(int* jptr){
  
    /*Print the value and address of the integer pointed to by jptr*/
    printf("The value of the integer pointed to by jptr is %d and the address is %p\n", *jptr, jptr);         
    /*Decrement the address by 1 pointed to by jptr using jptr */
    jptr-=1;
    printf("This is a Test %d and %p\n", *jptr, jptr);
    /*Print the address of jptr itself*/
    printf("The address of jptr iteslf is %p\n", &jptr);
}


int main(){
    
    /*Declare an integer x and initialize it randomly to a value in [0,10] 
*/  srand(time(NULL));
    int x = rand() % 11;

    /*Print the value and address of x*/
    printf("The value of x is %d and its address is %p\n", x, &x);
    
    /*Call fooA() with the address of x*/
    fooA(&x);
    /*Print the value of x*/
    printf("The value of x is %d\n", x);

    /* Q: Is the value of x different than the value that was printed at first? Why or why not?

    A: The value of x is changed, because we passed the 'address' into function fooA,
    not passed by reference. After increment the value of the integer pointed to 
    by iptr by 5, x is assigned to a new value.

    */
    
    /*Call fooB() with the address of x*/
    fooB(&x);
    /*Print the value and address of x*/
    printf("The value is %d and the address of x is %p\n", x, &x);
    
    /* Q: Are the value and address of x different than the value and address
    that were printed before the call to fooB(..)? Why or why not?

    A: The value of x 
    */

    return 0;
}



