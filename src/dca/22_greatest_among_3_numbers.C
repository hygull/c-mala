/*
  Date of creation: 12 November 2017,
  Title: Write a program to find the greatest among 3 integer numbers,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
  int a = 12, b = 9, c = 80;
  
  /* First method (very easy method to check but not efficient) */
  if( (a>=b) && (a>=c)){
      printf("1) %d is greatest\n", a);
  }
  
  if( (b>=c) && (b>=a)){
      printf("2) %d is greatest\n", b);
  }
  
  if( (c>=b) && (c>=a)){
      printf("3) %d is greatest\n", c);
  }
  
  
  /* Second method (efficient method) */
  a = 45, b = 8, c = 3;
  
  if(a > b) {  // a>b
      if(a > c) {  // a>b && a>c => a>b>c => a is greatest
          printf("1) %d is greatest\n", a);
      } else {  // a>b && c>a => c>a>b => c is greatest
          printf("3) %d is greatest\n", c);
      }
  } else {  // b>a
      if(b > c) {  // b>a && b>c  => b is greatest
          printf("2) %d is greatest\n", b);
      } else {  // b>a && c>b => c>b>a => c is greatest
          printf("3) %d is greatest\n", c);
      }
  }
  
}

/* Output:-
3) 80 is greatest
1) 45 is greatest
*/