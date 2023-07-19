#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                // Leap year, including 2000
                if (month >= 2 && day >= 60)
                {
                    day++;
                }
                printf("Day of the year: %d\n", day);
                printf("Remaining days: %d\n", 366 - day);
            }
            else
            {
                // Not a leap year, like 1900
                if (month == 2 && day == 60)
                {
                    printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
                }
                else
                {
                    printf("Day of the year: %d\n", day);
                    printf("Remaining days: %d\n", 365 - day);
                }
            }
        }
        else
        {
            // Leap year, excluding those divisible by 100 but not by 400
            if (month >= 2 && day >= 60)
            {
                day++;
            }
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 366 - day);
        }
    }
    else
    {
        // Not a leap year
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 365 - day);
    }
}

