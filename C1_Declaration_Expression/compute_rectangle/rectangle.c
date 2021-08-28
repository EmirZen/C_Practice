/*
Program that calculates rectangle area and perimeter based
on length and width
*/

#include <stdio.h>

int main() {
    // Declare and initialise length and width
    int length = 7;
    int width = 5;

    // Calculates area and perimeter
    int area = length*width;
    int perimeter = 2*(length+width);

    // Display output
    printf("Length is %d and width is %d\n", length, width);
    printf("Perimeter is %d\n", perimeter);
    printf("Area is %d\n", area);
    return 0;
}