/*
Program that takes input of 2 different items weight and amount
to calculate the overall average
*/

#include <stdio.h>

int main() {
    // Declare variables
    float weight1;
    float weight2;
    int amount1;
    int amount2;

    // Prompts user give input (weight and amount)
    printf("Please enter first item weight followed by amount: ");
    scanf("%f %d", &weight1, &amount1);
    printf("Please enter second item weight followed by amount: ");
    scanf("%f %d", &weight2, &amount2);

    // Calculate total items and overall average
    int total_items = amount1+amount2;
    float average = (amount1*weight1+amount2*weight2)/total_items;

    // Displays output
    printf("Item 1 has weight %f and amount %d\n", weight1, amount1);
    printf("Item 2 has weight %f and amount %d\n", weight2, amount2);
    printf("Total item amount is %d and overall average is %f\n", total_items, average);
    
    return 0;
}