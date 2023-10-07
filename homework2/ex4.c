//Write a program that will display a box of asterisks on the screen.


#include <stdio.h>
#include "../main.h"
#include <stdlib.h>

void ex4Main() {

    int width, height, numAsterisks;
    int asterisks[100][100]; // 2D array to store asterisk counts

    // Get width
    printf("Please insert width of the matrix: ");
    while (1) {
        if(scanf("%d", &width) != 1) {
            printf("Only positive integers are accepted, please try again\n");
            scanf("%*s"); // clear invalid input
        }
        else if (width <= 0) {
            printf("Only positive integers are accepted, please try again\n");
        }
        else {
            break;
        }
    }

    // Get height
    printf("Please insert height of the matrix: ");
    while (1) {
        if(scanf("%d", &height) != 1) {
            printf("Only positive integers are accepted, please try again\n");
            scanf("%*s"); // clear invalid input
        }
        else if (height <= 0) {
            printf("Only positive integers are accepted, please try again\n");
        }
        else {
            break;
        }
    }

    printf("You want to print a matrix of asterisks with dimensions %dx%d\n", width, height);

    // Get number of asterisks per row
    for (int i = 0; i < height; i++) {
        printf("Enter number of asterisks for row %d: ", i + 1);
        scanf("%d", &numAsterisks);

        if (numAsterisks > width) {
            printf("You cannot insert more asterisks than width\n");
            i--;  // Decrement i to prompt again
            continue;
        }

        // Store in 2D array
        asterisks[i][0] = numAsterisks;
    }
    printf("\n"); // Print blank row
    // Now print asterisks
    for (int i = 0; i < height; i++) {

        // Print centered asterisks
        int startCol = (width - asterisks[i][0]) / 2;

        for (int j = 0; j < width; j++) {
            if (j >= startCol && j < startCol + asterisks[i][0]) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }


}
