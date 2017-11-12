/*
  Date of creation: 12 November 2017,
  Title: Write a program to check whether the given number is even or odd,
  Coded by: Rishikesh Agrawani
  Note: % is known as modulus operator/modular division operator.
        It gives the remainder after division, eg. 12%7 = 5, 9%2 = 1, 11%8 = 3.
        If you divide any number by 2 and remainder is 0 then that number is even.
        Mean to say 12%2 = 0, so 12 is even.
        13%2 = 1, so 13 is odd.
*/

#include<stdio.h>

void main() 
{
  int a = 12, b = 9, c = 80;
  
  // Example 1
  if(a % 2 == 0)
  {
      printf("%d is even\n", a);
  } 
  else 
  {
      printf("%d is odd\n", a);
  }
  
  // Example 2
  if(b % 2 == 0)
  {
      printf("%d is even\n", b);
  } 
  else 
  {
      printf("%d is odd\n", b);
  }
  
  // Exmaple 3
  if(c % 2 == 0)
  {
      printf("%d is even", c);
  } 
  else 
  {
      printf("%d is odd", c);
  }
}

/* Output:-
12 is even
9 is odd
80 is even
*/