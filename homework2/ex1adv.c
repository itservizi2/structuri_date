//Write a program that asks the user to type in the year, month, and day of their birthday and then displays
// on the screen what day of the week they were born.

#include <stdio.h>
#include "../main.h"

void ex1advMain() {
    int year, month, day;

    while(1) {
        // Prompt user for input
        printf("Enter your birthday (YYYY MM DD): ");
        scanf("%d %d %d", &year, &month, &day);

        // Validate month
        if (month <= 0 || month > 12) {
            printf("Error: The year can have from 1 to 12 months, please check.\n");
            continue;
        }

        // Validate day
        if (day <= 0 || day > 31) {
            printf("Error: A month can have from 1 to 31 days, please check.\n");
            continue;
        }
        break;
    }
    // Adjust month and year for Zeller's Congruence formula
    if (month <= 2) {
        month += 12;
        year--;
    }

    int k = year % 100;
    int j = year / 100;

    // Apply Zeller's Congruence
    int dayOfWeek = (day + 13*(month + 1)/5 + k + k/4 + j/4 - 2*j) % 7;

    // Define the day names
    char *days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    // Print the result
    printf("You were born on a %s.\n", days[dayOfWeek]);


}
