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
        printf("%d %% %d = %d", a, b, c);
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
