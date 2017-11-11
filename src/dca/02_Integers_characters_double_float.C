/*
  Date of creation: 11 November 2017,
  Title: Write a program for using integers, charaters & float & double,
  Coded by: Rishikesh Agrawani
*/

// Include header file
#include<stdio.h>

// Definition of main() function
void main() 
{
  // Define integers
  int a = 10, b = 5;
  // Define characters
  char c = 'M', ch = 'H';
  //Define floats
  float f = 67.199692;
  //Define doubles
  double d = 120000.1231231234;
  
  printf("%d, %d", a, b);   // Printing integers
  printf("\n");   // Printing new line
  printf("Sum of %d and %d is %d", a, b, a+b);  // Printing integers and their sum
  printf("\n");   // Printing new line
  printf("%c, %c", c, ch);  // Printing characters with new line at end
  printf("\n");   //Printing newline
  printf("%f\n", f);  //Printing float followed by newline
  printf("%lf", d);   // Printing double
}

/* Output:-
10, 5
Sum of 10 and 5 is 15
M, H
67.199692
120000.123123
*/
