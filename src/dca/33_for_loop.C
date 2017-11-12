/*
  Date of creation: 12 November 2017,
  Title: Write a program to use for loop(looping statement) in C,
  Coded by: Rishikesh Agrawani,
  Note: 1) for loop is used to execute a statement/block of statements until the
        specified condition is true
        2) for loop is used to execute a statement/block of statements for 
        specific number of times say 10, 5, 6 etc.
*/

#include<stdio.h>

void main() 
{
  // Example 1
  // Printing "Malini and Rakhi both are friend" 10 times, each on new line
  for(int i=1; i<=10; i++) {
      printf("Malini and Rakhi both are friend\n");
  }
   
  // Example 2
  // Printing numbers from 1 to 10, each on new line
  for(int j=1; j<=10; j++) {
      printf("%d\n", j);
  }
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