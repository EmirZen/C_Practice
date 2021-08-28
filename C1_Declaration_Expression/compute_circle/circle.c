/*
Program that calculates circle area and perimeter based
on given radius
*/

#define PI 3.142857

#include <stdio.h>

int main() {
    // Declare and initialise radius
    int r = 6;

    // Calculate area and perimeter
    float area = PI*r*r;
    float perimeter = PI*r*2;

    // Display output
    printf("Radius is %d\n",r);
    printf("Perimeter is %f\n", perimeter);
    printf("Area is %f\n", area);

    return 0;
}