/*
  Date of creation: 12 November 2017,
  Title: Write a program to swap two numbers without using temporary variable,
  Coded by: Rishikesh Agrawani,
  Note: Swapping is the process of exchanging the values of 2 variables.
*/

#include<stdio.h>

void main() 
{
  int a = 10;
  int b = 5;
  
  printf("Before swapping:-\n");
  printf("a = %d, b = %d", a, b);
  printf("\n");
  
  // Swapping process goes here
  a = a + b;    // a=>15, b=>5
  b = a - b;    // a=>15, b=>10
  a = a - b;    // a=>5, b=>10
  
  printf("After swapping:-\n");
  printf("a = %d, b = %d", a, b);  
}

/* Output:-
Before swapping:-
a = 10, b = 5
After swapping:-
a = 5, b = 10
*/