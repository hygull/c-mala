/*
  Date of creation: 12 November 2017,
  Title: Write a program to demonstrate the use of switch case statement,
  Coded by: Rishikesh Agrawani
  Note: At a time, only 1 case will execute, if match found. Otherwise default section will execute
*/

#include<stdio.h>

void main() 
{
  int n = 67;
  int a = 10, b = 5;
  
  switch(n) {   // switch body starts
      case 5:
              printf("%d + %d = %d", a, b, a+b);
              break;
      case 12:
              printf("%d - %d = %d", a, b, a-b);
              break;             
      case 24:
              printf("%d * %d = %d", a, b, a*b);
              break;  
      case 67:  // This case matched
              printf("%d / %d = %d", a, b, a/b);  // It will execute
              break;  // Take the control out of switch body
      case 8+9:
              printf("%d % %d = %d", a, b, a%b);
              break;
      default:
              printf("No match found. Enjoy programming");
  }  // switch body ends
  
  printf("\nProgramming is really a nice thing in IT world.");
}

/* Output:-
10 / 5 = 2
Programming is really a nice thing in IT world.
*/