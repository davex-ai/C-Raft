## This is a mini project is a number guessing game app. 

### Features
- ***A Number Guessing Game***
- Tracks total amount of tries
- Generate random number for computer choice

***Code Snippet***
```c
int main() {
    srand(time(NULL));

    const int min = 1;
    const int max = 100; // ← Set your desired range
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

```

***Output***

```terminal
******NUMBER GUESSING GAME******
Guess the correct number between 1 - 100: 50
TOO LOW
Guess the correct number between 1 - 100: 70
TOO LOW
Guess the correct number between 1 - 100: 90
TOO LOW
Guess the correct number between 1 - 100: 95
TOO LOW
Guess the correct number between 1 - 100: 99
TOO HIGH
Guess the correct number between 1 - 100: 98
TOO HIGH
Guess the correct number between 1 - 100: 96
Correct!
It took you 7 tries.
```

### Run
```terminal
if ($?) { gcc *.c -o main.exe } ; if ($?) { .\main.exe }
```

### MADE BY [DAVEORA](https://github.com/davex-ai/) 