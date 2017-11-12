/*
  Date of creation: 12 November 2017,
  Title: Write a program to use do-while loop(looping statement) in C,
  Coded by: Rishikesh Agrawani,
  Note: 1) do-while loop is also used to execute a statement/block of statements  atleast 1 & until the specified condition is true 
*/

#include<stdio.h>

void main() 
{
  // Example 1
  // Printing "Malini and Rakhi both are friend" 10 times, each on new line
  int i = 1;
  do
  {
      printf("Malini and Rakhi both are friend\n");
      i++;
  }
  while(i<=10);
  
  // Example 2
  // Printing numbers from 1 to 10, each on new line
  int j = 1;
  do
  {
      printf("%d\n", j);
      j++;
  }
  while(j<=10);
}

/* Output:-
Malini and Rakhi both are friend
Malini and Rakhi both are friend
Malini and Rakhi both are friend
Malini and Rakhi both are friend
Malini and Rakhi both are friend
Malini and Rakhi both are friend
Malini and Rakhi both are friend
Malini and Rakhi both are friend
Malini and Rakhi both are friend
Malini and Rakhi both are friend
1
2
3
4
5
6
7
8
9
10
*/