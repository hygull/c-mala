/*
  Date of creation: 12 November 2017,
  Title: Write a program to use while loop(looping statement) in C,
  Coded by: Rishikesh Agrawani,
  Note: 1) while loop is also used to execute a statement/block of statements until the
        specified condition is true
        2) while loop is used to execute a statement/block of statements for 
        specific number of times say 10, 5, 6 etc.
        3) Sometimes it is used when we don't know how many times we want to execute
        the statement/block of statements.
*/

#include<stdio.h>

void main() 
{
  // Example 1
  // Printing "Malini and Rakhi both are friend" 10 times, each on new line
  int i = 1;
  while(i<=10)
  {
      printf("Malini and Rakhi both are friend\n");
      i++;
  }
   
  // Example 2
  // Printing numbers from 1 to 10, each on new line
  int j = 1;
  while(j<=10)
  {
      printf("%d\n", j);
      j++;
  }
  
  // Exmaple 3
  // when k's value will become 5 then exit
  int k = 1;
  i = 10;
  while(1)    // This condition is always true, that is why we have used break statement to terminate the while loop
  {
      if(k == 5) {
          break;   // Go outside of while loop
      }
      printf("i = %d\n", i);
      k++;
  }
  
  printf("Wow!!!");
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
i = 10
i = 10
i = 10
i = 10
Wow!!!
*/