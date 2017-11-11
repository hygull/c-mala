/*
  Date of creation: 11 November 2017,
  Title: Write a program to use increment operator,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
  int a = 10;
  int b = 5;
  int c;
  
  // Using post-increment operator
  // first assign current value 10 then increment by 1
  c = a++;   
  printf("%d, %d", a, c);
  printf("\n");
  
  // Using pre-increment operator
  // first increment then assign incremented value
  c = ++b;
  printf("%d, %d\n", b, c);
  
  c = ++b;
  printf("%d, %d", b, c);
}

/* Output:-
11, 10
6, 6
7, 7
*/