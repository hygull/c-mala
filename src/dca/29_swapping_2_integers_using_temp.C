/*
  Date of creation: 12 November 2017,
  Title: Write a program to swap two numbers using temporary variable,
  Coded by: Rishikesh Agrawani,
  Note: Swapping is the process of exchanging the values of 2 variables.
*/

#include<stdio.h>

void main() 
{
  int a = 12;
  int b = 9;
  int temp;
  
  printf("Before swapping:-\n");
  printf("a = %d, b = %d", a, b);
  printf("\n");
  
  // Swapping process goes here
  temp = a;    // temp=>12, a=>12, b=>9
  a = b;       // temp=>12, a=>9, b=>9
  b = temp;    // temp=>12, a=>9, b=>12
  
  printf("After swapping:-\n");
  printf("a = %d, b = %d", a, b);  
}

/* Output:-
Before swapping:-
a = 12, b = 9
After swapping:-
a = 9, b = 12
*/