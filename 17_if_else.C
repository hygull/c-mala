/*
  Date of creation: 11 November 2017,
  Title: Write a program for conditional if...else statement,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
  int a = 10;
  int b = 5;
  
  // Example 1
  if(a < b) {
      printf("I am Malinikesh & I know %d is greater than %d\n", a, b);
  } else {
      printf("I am Malinikesh & I know %d is greater than %d\n", a, b);
  }
  
  // Example 2
  if( b != 10) {
      printf("%d is not equal to 10", b);
  } else {
      printf("%d is equal to 10", b);
  }
}

/* Output:-
I am Malinikesh & I know 10 is greater than 5
5 is not equal to 10
*/