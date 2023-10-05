//Write a program that will display a box of asterisks on the screen.


#include <stdio.h>
#include "../main.h"

void ex4Main() {

    int width, height, numAsterisks;
    int asterisks[100][100]; // 2D array to store asterisk counts

    // Get width
    printf("Please insert width of the matrix: ");
    while (1) {
        scanf("%d", &width);
        if (width > 0) {
            break;
        }
        printf("Invalid input, try again\n");
    }

    // Get height
    printf("Please insert height of the matrix: ");
    while (1) {
        scanf("%d", &height);
        if (height > 0) {
            break;
        }
        printf("Invalid input, try again\n");
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
