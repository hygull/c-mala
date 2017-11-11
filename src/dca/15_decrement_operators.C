/*
  Date of creation: 11 November 2017,
  Title: Write a program to use decrement operator,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
  int a = 10;
  int b = 5;
  int c;
  
  // Using post-decrement operator
  // first assign current value 10 then decrement by 1
  c = a--;   
  printf("%d, %d", a, c);
  printf("\n");
  
  // Using pre-decrement operator
  // first decrement then assign decremented value
  c = --b;
  printf("%d, %d\n", b, c);
  
  c = --b;
  printf("%d, %d", b, c);
}

/* Output:-
9, 10
4, 4
3, 3
*/