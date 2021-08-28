/*
Program that prints 3 characters then prints it in reverse order
*/

#include <stdio.h>

int main() {
    // Declare all characters variables
    char char1 = 'X';
    char char2 = 'M';
    char char3 = 'L';

    // Prints character in forward and reversed order
    printf("Normal order is %c%c%c and the reverse order is %c%c%c\n",
    char1,char2,char3,
    char3,char2,char1);
    return 0;
}