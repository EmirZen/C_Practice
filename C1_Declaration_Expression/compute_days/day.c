/*
Simple program that converts day into years, weeks, and days terms
*/

#include <stdio.h>

#define DAYS_IN_YEAR 365
#define DAYS_IN_WEEK 7

int main() {
    // Declare and initialise number of days to convert
    int num_days = 1329;

    // Calculate days in terms of years, weeks, and days
    int years = num_days/DAYS_IN_YEAR;
    int weeks = (num_days%DAYS_IN_YEAR)/DAYS_IN_WEEK;
    int days = num_days-years*DAYS_IN_YEAR-weeks*DAYS_IN_WEEK;

    // Display Output
    printf("number of days to convert is %d\n", num_days);
    printf("Years = %d\n",years);
    printf("Weeks = %d\n",weeks);
    printf("Dayss = %d\n",days);

    return 0;
}