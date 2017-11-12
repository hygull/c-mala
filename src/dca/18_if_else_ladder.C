/*
  Date of creation: 11 November 2017,
  Title: Write a program for to demostrate the use of conditional if...else ladder,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
  int a = 12;
  int b = 55;
  
  // Example 1
  if(a > b) {    // This condition is false, so move to else part
      printf("I am Malinikesh & I know %d is greater than %d\n", a, b);
  } else if(a == 12) {  // This condition is true
          printf("%d is equal to 12\n", a);   // Finally it will execute
  } else {
          printf("%d is not equal to 12\n", a);
  }
   
  
  // Example 2
  if( b != 10) {   // This condition is true, so continue 
      if(b == 55) { // Finally it will execute
          printf("%d is equal to 55\n", b);
      } 
  } else if(b != 56) {
          printf("%d is equal not equal to 56, it is eqaul to %d\n", b, b);
  } else {
          printf("%d is equal to 56\n", b);
  }
}

/* Output:-
12 is equal to 12
55 is equal to 55
*/