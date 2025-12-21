## This is a mini projectis a Temperature calculator.
### Features
- ***TEMPERATURE-CALCULATOR***

***Code Snippet***
```c
 printf("=============================\n");
    printf("Temperature Conversion Calculator\n");
    printf("=============================\n");
    printf("1. Celsius to Farenheit\n");
    printf("2. Farenheit to Celsius\n");
    printf("Enter 1 or 2: ");
    int choice;
    double total;
    scanf("%d", &choice);
    if (choice == 1)
    {
        float celsius;
        printf("Enter the temperature in celsius: ");
        scanf("%f", &celsius);
        total = (celsius * 1.8) + 32;
        printf("%.2f celsius to farenheit is %.2lf", celsius, total);
    }

```

***Output***

```terminal
=============================
Temperature Conversion Calculator
=============================
1. Celsius to Farenheit
2. Farenheit to Celsius
Enter 1 or 2: 1
Enter the temperature in celsius: 36
36.00 celsius to farenheit is 96.80
```

### Run
```cmd
 if ($?) { gcc *.c -o main.exe } ; if ($?) { .\main.exe }
```

### MADE BY [DAVEORA](https://github.com/davex-ai/) 