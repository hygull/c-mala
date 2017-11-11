/*
  Date of creation: 11 November 2017,
  Title: Write a program to demonstrate the use of logical operators,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
  int a = 10;
  int b = 5;
  int c = 6;
  
  /* && operator (LOGICAL AND) */
  if( (b < a) && (c < a)) {
      printf("%d is less than %d AND %d is less than %d.\n", b, a, c, a);
  } else {
      printf("Great");
  }
  
   /* && operator (LOGICAL AND) */
  if( (b < a) || (c > a)) {
      printf("%d is less than %d OR %d is greater than %d.\n", b, a, c, a);
  } else {
      printf("Excellent");
  }
  
  /* ! operator (LOGICAL NOT) */
  if( !(b > a) ) {
      printf("%d is NOT greater than %d", b, a);
  } else {
      printf("Nice");
  }
}

/* Output:-
5 is less than 10 AND 6 is less than 10.
5 is less than 10 OR 6 is greater than 10.
5 is NOT greater than 10
*/