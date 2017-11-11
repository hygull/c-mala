/*
  Date of creation: 11 November 2017,
  Title: Write a program for modulus of 2 integers,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
    int a = 10;    
    int b = 5, c = 3, d = 4;
    int r1, r2, r3;
    
    r1 = a % b;
    r2 = a % c;
    r3 = a % d;

    printf("%d, %d, %d\n", r1, r2, r3);   /* \n is for printing newline */
    printf("%d: %d: %d\n", r1, r2, r3);
    printf("%d\n%d\n%d", r1, r2, r3);
}

/* Output:-
0, 1, 2
0: 1: 2
0
1
2
*/