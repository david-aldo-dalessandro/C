/*David D'Alessandro
1;5202;0c *11/14/21
 *Practice problems for chapter 1 section 2 of 'The C Language' 
 * The Fahrenheit to Celsius program
 */

#include <stdio.h>

int main(){

  int i; //increment variable for loop

  //Exercise 1-3 A heading for the table
  printf("\tFahrenheit To Celsius Conversion Table\n\t---------------------------------------\n\t\t  F\t     C\n\t\t ---\t    ---\n");
      
  //Let's use a for loop here to acheive the same results
  //we increment by 20 degrees F, until 300 degrees is reached
  for(i = 0; i <= 300; i+=20){
    //we format the output here with a single tab like the book does
    //but we use a different format here out of preference
    printf("\t\t%3d\t%6.f\n", i, (5./9.)*((i)-32) );
  }


  return 0;

}
