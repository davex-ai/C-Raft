#include <stdio.h>

  int main(){
    
        
char operator;
double num1;
double num2;
double result;
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operation (+, -, *, /): "); 
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '-':
        result = num1 - num2;
        printf("Ans: %lf", result);
        break;
    case '+':
        result = num1 + num2;
        printf("Ans: %lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Ans: %lf", result);
        break;
        case '/':
        result = num1 / num2;
        printf("Ans: %lf", result);
        break;
        
        default:
        break;
    }
  }