/*
Program that tests calculation between various data types
*/

#include <stdio.h>

int main() {
    // Declare variable and initialisation
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    // Calculation done

    // interger addition
    printf("a + c =  %d\n", a + c);
    printf("s + b =  %d\n", s + b);

    // float/double addition
    printf("x + c = %f\n", x + c);
    printf("dx + x = %f\n", dx + x);
    printf("a + x = %f\n", a + x);

    // long interger addition
    printf("((int) dx) + ax =  %ld\n", ((int) dx) + ax);
    printf("ax + b = %ld\n", ax + b);
    printf("ax + c = %ld\n", ax + c);

    // short interger addition
    printf("s + c =  %hd\n", s + c);

    // long unsigned interger addition
    printf("ax + ux = %lu\n", ax + ux);

    return 0;
}