/*
Program that prompts user to input 2 intergers and multiplies it
*/

#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2;

    // Prompts for user input and read it
    printf("Please input 2 intergers to be multiplied: ");
    scanf("%d %d", &num1, &num2);
    
    // Compute sum, displays it
    printf("The first number is %d\n", num1);
    printf("The second number is %d\n", num2);
    printf("The product is %d\n", num1*num2);

    return 0;
}