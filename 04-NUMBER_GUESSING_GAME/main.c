#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    const int min = 1;
    const int max = 100; 
    int answer = (rand() % (max - min + 1)) + min; 

    int guess; 
    int tries = 0; 

    printf("******NUMBER GUESSING GAME******\n");

    do {
        printf("Guess the correct number between %d - %d: ", min, max);
        scanf("%d", &guess); 
        tries++;

        if (guess > answer) {
            printf("TOO HIGH\n");
        } else if (guess < answer) {
            printf("TOO LOW\n");
        } else {
            printf("Correct!\n");
            printf("It took you %d tries.\n", tries);
            break;
        }
    } while (true);

    return 0;
}