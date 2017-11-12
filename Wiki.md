## DCA assignments - Nagarjuna Science college, Raipur(CG)

##### 1 - Write a program to print "Hello DCA"

```C
/*
  Date of creation: 11 November 2017,
  Title: Write a program to print "Hello DCA",
  Coded by: Rishikesh Agrawani
*/

// Include header file
#include<stdio.h>

// Definition of main() function
void main() 
{
  printf("Hello DCA");
}

/* Output:-
Hello DCA
*/
```

##### 2 - Write a program for using integers, characters, floats & doubles

```C
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
```

##### 3 - Write a program for storing integer values

```C
/*
  Date of creation: 11 November 2017,
  Title: Write a program for storing integer values,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
  // Storing 10 into variable a, 5 into variable b, 12 into variable c
  int a = 10, b = 5;
  int c = 12;
    
  // Printing values stored into integer varaibles a, b, c
  printf("a = %d \n", a);
  printf("b = %d \n", b);
  printf("c = %d \n", c);
}

/* Output:-
a = 10 
b = 5 
c = 12 
*/
```

##### 4 - Write a program for storing character values

```C
/*
  Date of creation: 11 November 2017,
  Title: Write a program for storing character values,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
  // Storing 'R' into variable c, 'H' into variable ch, 'M' into variable ch2
  char c = 'R';
  char ch = 'H';
  int ch2 = 'M';
    
  // Printing values stored into character varaibles c, ch, ch2
  printf("c = %c \n", c);
  printf("ch = %c \n", ch);
  printf("ch2 = %c", ch2);
}

/* Output:-
c = R 
ch = H 
ch2 = M
*/
```

##### 5 - Write a program for storing float values

```C
/*
  Date of creation: 11 November 2017,
  Title: Write a program for storing float values,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
  // Storing 12.67 into variable f, 34.89 into variable f2, 23.56 into variable f3
  float f = 12.67;
  float f2 = 34.89;
  float f3 = 23.56;
    
  // Printing values stored into flaot varaibles f, f2, f3
  printf("f = %f \n", f);
  printf("f2 = %f \n", f2);
  printf("f3 = %f", f3);
}

/* Output:-
f = 12.670000 
f2 = 34.889999 
f3 = 23.559999
*/
```

##### 6 - Write a program for adding 2 integer numbers

```C
/*
  Date of creation: 11 November 2017,
  Title: Write a program for adding two integer numbers,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
    int a = 10;    
    int b = 5;
    int c;
    c = a + b;
    
    printf("%d + %d = %d", a, b, c);
}

/* Output:-
10 + 5 = 15
*/
```

##### 7 - Write a program for subtracting one integer number from other

```
/*
  Date of creation: 11 November 2017,
  Title: Write a program for subtracting one integer number from other,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
    int a = 10;    
    int b = 5;
    int c;
    c = a - b;
    
    printf("%d - %d = %d", a, b, c);
}

/* Output:-
10 - 5 = 5
*/
```

##### 8 - Write a program for multiplying 2 integer numbers

```C
/*
  Date of creation: 11 November 2017,
  Title: Write a program for multiplying 2 integer numbers,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
    int a = 10;    
    int b = 5;
    int c;
    c = a * b;
    
    printf("%d * %d = %d", a, b, c);
}

/* Output:-
10 * 5 = 50
*/
```

##### 9 - Write a program for dividing integers

```C
/*
  Date of creation: 11 November 2017,
  Title: Write a program for dividing integers,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
    int a = 10;    
    int b = 5;
    int c;
    c = a / b;
    
    printf("%d / %d = %d", a, b, c);
}

/* Output:-
10 / 5 = 2
*/
```

##### 10 - Write a program for modulus of 2 integers

```C
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
```

##### 11 - Write a menu driven program for addition, subtraction, multiplication, division and modulus of 2 integer numbers

```C
/*
  Date of creation: 11 November 2017,
  Title: Write a menu driven program for addition, subtraction, multiplication, division and modulus of 2 integer numbers
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
    int a = 10;    
    int b = 5;
    int c, choice;
    
    printf("Arithmetic operations\n");
    printf("1. Addition\n");
    printf("2. Subratcion\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Please choose one option:\t");
    scanf("%d", &choice);
    
    if(choice == 1) {
        c = a + b;
        printf("%d + %d = %d", a, b, c);
    }
    
    if(choice == 2) {
        c = a - b;
        printf("%d * %d = %d", a, b, c);
    }
    
    if(choice == 3) {
        c = a * b;
        printf("%d * %d = %d", a, b, c);
    }
    
    if(choice == 4) {
        c = a / b;
        printf("%d / %d = %d", a, b, c);
    }
    
    if(choice == 5) {
        c = a % b;
        printf("%d %% %d = %d", a, b, c);  /*  %% is used to print %  */
    }
}

/* Output */
/* 1st RUN
Arithmetic operations
1. Addition
2. Subratcion
3. Multiplication
4. Division
5. Modulus
Please choose one option:    1
10 + 5 = 15
*/

/* 2nd RUN
Arithmetic operations
1. Addition
2. Subratcion
3. Multiplication
4. Division
5. Modulus
Please choose one option:    2
10 * 5 = 5
*/

/* 3rd RUN
Arithmetic operations
1. Addition
2. Subratcion
3. Multiplication
4. Division
5. Modulus
Please choose one option:    3
10 * 5 = 50
*/

/* 4th RUN
Arithmetic operations
1. Addition
2. Subratcion
3. Multiplication
4. Division
5. Modulus
Please choose one option:    4
10 / 5 = 2
*/

/* 5th RUN
Arithmetic operations
1. Addition
2. Subratcion
3. Multiplication
4. Division
5. Modulus
Please choose one option:    5
10 % 5 = 0
*/
```

##### 12 - Write a program to demonstrate the use of relational operators { <, <=, >, >=, ==, !=}

```C
/*
  Date of creation: 11 November 2017,
  Title: Write a program to demonstrate the use of relational operators,
  Coded by: Rishikesh Agrawani
*/

// Include header file
#include<stdio.h>

// Definition of main() function
void main() 
{
  int a = 10;
  int b = 5;
  int c = 6;
  
  /* < operator (less than) */
  if( b < a ) {
      printf("%d is less than %d.\n", b, a);
  }
  
  /* <= operator (less than or equal than) */
  if( b <= 5 ) {
      printf("%d is less than or equal to %d\n", b, 5);
  }

  /* > operator (greater than) */
  if( a > c ) {
      printf("%d is greater than %d.\n", a, c);
  }
  
  /* <= operator (greater than or equal to) */
  if( b >= 4 ) {
      printf("%d is greater than or equal to %d.\n", b, 4);
  }
  
  /* == operator (equal to) */
  if( c == 6 ) {
      printf("%d is equal to %d.\n", c, 6);
  }
  
  /* != operator (not equal to) */
  if( a != 7) {
      printf("%d is not equal to %d", a, 7);
  } else {
      printf("Enjoy C programming");
  }
  
}

/* Output:-
5 is less than 10.
5 is less than or equal to 5
10 is greater than 6.
5 is greater than or equal to 4.
6 is equal to 6.
10 is not equal to 7
*/
```

##### 13 - Write a program to demonstrate the use of logical operators

```C
/*
  Date of creation: 11 November 2017,
  Title: Write a program to demonstrate the use of logical operators,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
  int a = 10;
  int b = 5;
  int c = 6;
  
  /* && operator (LOGICAL AND) */
  if( (b < a) && (c < a)) {
      printf("%d is less than %d AND %d is less than %d.\n", b, a, c, a);
  } else {
      printf("Great");
  }
  
   /* && operator (LOGICAL AND) */
  if( (b < a) || (c > a)) {
      printf("%d is less than %d OR %d is greater than %d.\n", b, a, c, a);
  } else {
      printf("Excellent");
  }
  
  /* ! operator (LOGICAL NOT) */
  if( !(b > a) ) {
      printf("%d is NOT greater than %d", b, a);
  } else {
      printf("Nice");
  }
}

/* Output:-
5 is less than 10 AND 6 is less than 10.
5 is less than 10 OR 6 is greater than 10.
5 is NOT greater than 10
*/
```

##### 14 - Write a program to use increment operator

```C
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
```

##### 15 - Write a program to use decrement operator

```C
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
```

##### 16 - Write a program for conditional if statement

```C
/*
  Date of creation: 11 November 2017,
  Title: Write a program for conditional if statement,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
  int a = 10;
  int b = 5;
  
  // Example 1
  if(a > b) {
      printf("I am Malinikesh & I know %d is greater than %d\n", a, b);
  }
  
  // Example 2
  if( a == 10) {
      printf("%d is equal to 10", a);
  }
}

/* Output:-
I am Malinikesh & I know 10 is greater than 5
10 is equal to 10
*/
```

##### 17 - Write a program for conditional if...else statement

```C
/*
  Date of creation: 11 November 2017,
  Title: Write a program for conditional if...else statement,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
  int a = 10;
  int b = 5;
  
  // Example 1
  if(a < b) {
      printf("I am Malinikesh & I know %d is greater than %d\n", a, b);
  } else {
      printf("I am Malinikesh & I know %d is greater than %d\n", a, b);
  }
  
  // Example 2
  if( b != 10) {
      printf("%d is not equal to 10", b);
  } else {
      printf("%d is equal to 10", b);
  }
}

/* Output:-
I am Malinikesh & I know 10 is greater than 5
5 is not equal to 10
*/
```

##### 18 -  Write a program for to demostrate the use of conditional if...else ladder

```C
/*
  Date of creation: 12 November 2017,
  Title: Write a program for to demostrate the use of conditional if...else ladder,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
  int a = 12;
  int b = 55;
  
  // Example 1
  if(a > b) {    // This condition is false, so move to else part
      printf("I am Malinikesh & I know %d is greater than %d\n", a, b);
  } else if(a == 12) {  // This condition is true
          printf("%d is equal to 12\n", a);   // Finally it will execute
  } else {
          printf("%d is not equal to 12\n", a);
  }
   
  
  // Example 2
  if( b != 10) {   // This condition is true, so continue 
      if(b == 55) { // Finally it will execute
          printf("%d is equal to 55\n", b);
      } 
  } else if(b != 56) {
          printf("%d is equal not equal to 56, it is eqaul to %d\n", b, b);
  } else {
          printf("%d is equal to 56\n", b);
  }
}

/* Output:-
12 is equal to 12
55 is equal to 55
*/
```

##### 19 - Write a program for to demostrate the use of nested if

```C
/*
  Date of creation: 12 November 2017,
  Title: Write a program for to demostrate the use of nested if,
  Coded by: Rishikesh Agrawani
*/

#include<stdio.h>

void main() 
{
  int a = 12;
  int b = 55;
  
  // Example 1
  if(a > b) {    // This condition is false, so move to else part
      if(b == 34) { 
          printf("%d is equal to 34\n", b);
      } else {
          printf("%d is equal not equal to 34, it is eqaul to %d\n", b, b);
      }
  } else {
      if(a == 12) {  // This condition is true
          printf("%d is equal to 12\n", a);   // Finally it will execute
      } else {
          printf("%d is not equal to 12\n", a);
      }
  } 
  
  // Example 2
  if( b != 10) {   // This condition is true, so continue 
      if(b == 34) { // This condition is false, so move to else part
          printf("%d is equal to 34\n", b);
      } else {
          printf("%d is equal not equal to 34, it is eqaul to %d\n", b, b); // Finally it will execute
      }
  } else {   // This part will not execute
      if(b == 56) {
          printf("%d is equal to 56\n", b);
      } else {
          printf("%d is equal not equal to 56, it is eqaul to %d\n", b, b);
      }
  }

}

/* Output:-
12 is equal to 12
55 is equal not equal to 34, it is eqaul to 55
*/
```

```C
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
```