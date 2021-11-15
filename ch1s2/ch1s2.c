/*David D'Alessandro
1;5202;0c *11/14/21
 *Practice problems for chapter 1 section 2 of 'The C Language' 
 * The Fahrenheit to Celsius program
 */

#include <stdio.h>

int main(){

  int i; //increment variable for loop

  //Let's use a for loop here to acheive the same results
  //we increment by 20 degrees F, until 300 degrees is reached
  for(i = 0; i <= 300; i+=20){
    //we format the output here with a single tab like the book does
    //but we use a different format here out of preference 
    printf("%dF  \t%.fC\n", i, (5./9.)*((i)-32) );
  }


  return 0;

}
