#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    srand(time(NULL));
    
    // variables
    int i = 0;
    int j = 10;
    int tries = 0;
    int maximumTries = 10;




    // mini-project, guess the number using rand
    int max_number = 101;
    int secretNumber = rand() % max_number;

    printf("Welcome to the guess the number game.\n");
    printf("You have %d tries to guess the number.\n", maximumTries);

    while (tries < maximumTries) {
        int guess;
        printf("Guess the number (0-%d): ", max_number);
        scanf("%d", &guess);
        if (guess == secretNumber) {
            printf("You guessed the number!\n");
            printf("It took you %d tries.\n", tries);
            break;
        } else if (guess < secretNumber) {
            printf("Too low!\n");
            printf("You have %d tries left.\n", maximumTries - tries);
            tries++;
        } else if (guess > secretNumber) {
            printf("Too high!\n");
            printf("You have %d tries left.\n", maximumTries - tries);
            tries++;
        }
    }

    return 0;

}