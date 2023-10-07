#include <stdio.h>
#include "main.h"

void printOptions() {
    printf("Please choose an option:\n");

    printf("1. ex1Main\n");
    printf("2. ex2Main\n");
    printf("3. ex3Main\n");
    printf("4. ex4Main\n");
    printf("5. ex5Main\n");
    printf("6. ex1advMain\n");
}

int main() {
    printOptions();

    int func_toRun_Choise;
    scanf("%d", &func_toRun_Choise);
    while (getchar() != '\n');

    switch (func_toRun_Choise) {

        case 1: ex1Main(); break;
        case 2: ex2Main(); break;
        case 3: ex3Main(); break;
        case 4: ex4Main(); break;
        case 5: ex5Main(); break;
        case 6: ex1advMain(); break;
        default:
            printf("Invalid option. Exiting.\n");
            return 1;
    }

    return 0;
}
