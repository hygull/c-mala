/*
  Date of creation: 11 November 2017,
  Title: Write a program to demonstrate the use of relational operators,
  Coded by: Rishikesh Agrawani
*/

// Include header file
#include<stdio.h>

// Definition of main() function
void main() 
{
  int a = 10;
  int b = 5;
  int c = 6;
  
  /* < operator (less than) */
  if( b < a ) {
      printf("%d is less than %d.\n", b, a);
  }
  
  /* <= operator (less than or equal than) */
  if( b <= 5 ) {
      printf("%d is less than or equal to %d\n", b, 5);
  }

  /* > operator (greater than) */
  if( a > c ) {
      printf("%d is greater than %d.\n", a, c);
  }
  
  /* <= operator (greater than or equal to) */
  if( b >= 4 ) {
      printf("%d is greater than or equal to %d.\n", b, 4);
  }
  
  /* == operator (equal to) */
  if( c == 6 ) {
      printf("%d is equal to %d.\n", c, 6);
  }
  
  /* != operator (not equal to) */
  if( a != 7) {
      printf("%d is not equal to %d", a, 7);
  } else {
      printf("Enjoy C programming");
  }
  
}

/* Output:-
5 is less than 10.
5 is less than or equal to 5
10 is greater than 6.
5 is greater than or equal to 4.
6 is equal to 6.
10 is not equal to 7
*/