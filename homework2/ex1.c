//Scrie un program care va afișa la ecran ceea ce a introdus un utilizator de la tastatură.


#include <stdio.h>
#include "../main.h"

void ex1Main() {

    char userInput[100]; // Assuming the user will enter at most 100 characters

    printf("Enter a string: ");
    fgets(userInput, sizeof(userInput), stdin); // Read input from the user

    printf("You entered: %s", userInput); // Display the input

}


