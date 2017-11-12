/*
  Date of creation: 12 November 2017,
  Title: Write a program for to demostrate the use of nested if,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
  int a = 12;
  int b = 55;
  
  // Example 1
  if(a > b) {    // This condition is false, so move to else part
      if(b == 34) { 
          printf("%d is equal to 34\n", b);
      } else {
          printf("%d is equal not equal to 34, it is eqaul to %d\n", b, b);
      }
  } else {
      if(a == 12) {  // This condition is true
          printf("%d is equal to 12\n", a);   // Finally it will execute
      } else {
          printf("%d is not equal to 12\n", a);
      }
  } 
  
  // Example 2
  if( b != 10) {   // This condition is true, so continue 
      if(b == 34) { // This condition is false, so move to else part
          printf("%d is equal to 34\n", b);
      } else {
          printf("%d is equal not equal to 34, it is eqaul to %d\n", b, b); // Finally it will execute
      }
  } else {   // This part will not execute
      if(b == 56) {
          printf("%d is equal to 56\n", b);
      } else {
          printf("%d is equal not equal to 56, it is eqaul to %d\n", b, b);
      }
  }

}

/* Output:-
12 is equal to 12
55 is equal not equal to 34, it is eqaul to 55
*/