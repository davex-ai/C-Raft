#include <stdio.h>

int main(){
    char item[30];
    float price;
    int quantity;
    float total;

    printf("What item would you like to buy? ");
    scanf("%s", &item);

    printf("What is the price of each? ");
    scanf("%f", &price);

    printf("How many would you like? ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("You have bought %d %s at the cost of $%.2f\n", quantity, item, total);
    printf("==============================\n");
    printf("=========YOUR RECEIPT========\n");
    printf("  ITEMS   QUANTITY   AMOUNT\n");
    printf("   %s       %d      %.2f\n", item, quantity, price);
    printf("TOTAL----------------%.2f\n", total);
    printf("THANK YOU FOR SHOPPING WITH US🖐️\n");
    printf("=========================");
}