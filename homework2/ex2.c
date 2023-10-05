//Scrie un program care va afișa la ecran vârsta ta.

#include "../main.h"
#include <stdio.h>


void ex2Main() {


    int birthYear, currentYear, age;

    // Get user input for birth year
    printf("Enter my birth year: ");
    scanf("%d", &birthYear);

    // Get current year
    currentYear = 2023;

    // Calculate age
    age = currentYear - birthYear;

    // Print age
    printf("My age is %d years\n", age);


}
