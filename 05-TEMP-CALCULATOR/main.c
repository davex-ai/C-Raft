#include <stdio.h>

      int main(){
    
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
    else if (choice == 2)
    {
        float fahrenheit;
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        total = (fahrenheit - 32) / 1.8;
        printf("%.2f farenheit to celsius is %.2lf", fahrenheit, total);
    }
    else
    {
        printf("Invalid Input");
    }

} 