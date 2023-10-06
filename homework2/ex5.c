//Write a program that will display the sum, difference, product and quotient of two numbers on the screen.

#include <stdio.h>
#include "../main.h"

void ex5Main() {
    // Declare variables
    float num1, num2;
    float sum, diff, product, quotient;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculate operations
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;

    // Check if the second number is not zero for division
    if (num2 != 0) {
        quotient = num1 / num2;
        // Display results
        printf("Sum: %.2f\n", sum);
        printf("Difference: %.2f\n", diff);
        printf("Product: %.2f\n", product);
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }


}


