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
