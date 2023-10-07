//Write a program that will display a rectangle of asterisks (an asterisk is the * character) on the screen.
//Example
//****
//****
#include <stdio.h>
#include "../main.h"
#include <stdlib.h>
#include <ctype.h>

#define POSITIVE_INT_MSG "Only positive integers are accepted, please try again\n"

void ex3Main() {

    int width, height;

    // Get width
    while (1) {
        printf("Enter width: ");
        if (scanf("%d", &width) != 1) {
            printf(POSITIVE_INT_MSG);
            scanf("%*[^\n]"); // clear input buffer
            scanf("%*c");
            continue;
        }

        if (width > 0) {
            break;
        }

        printf(POSITIVE_INT_MSG);
    }

    // Get height
    while (1) {
        printf("Enter height: ");
        if (scanf("%d", &height) != 1) {
            printf(POSITIVE_INT_MSG);
            scanf("%*[^\n]"); // clear input buffer
            scanf("%*c");
            continue;
        }

        if (height > 0) {
            break;
        }

        printf(POSITIVE_INT_MSG);
    }

    printf("\n");

    // Print blank row
    for (int i = 0; i < height; i++) {

        printf("*"); // Print first asterisk

        for (int j = 0; j < width; j++) {
            printf("*");
        }

        printf("\n");
    }

}
