#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void checkBalance(float balance){
    printf("You balance is $%.2f\n", balance);
}

float deposit(float amount){
    if (amount < 0){
        printf("Invalid amount");
    }
    printf("You have succesfully deposited $%.2f.\n", amount);
    return amount;
}

float withdraw(float balance, float amount){
    if (amount > balance) {
        printf("You can't withdraw %.2f You Balance is %.2f\n", amount, balance);
    }else{
        balance = balance - amount;
        printf("You have successfully withdrawn %.2f. Your Balance is %.2f\n", amount, balance);
    }
    return balance;
    
}
int main(){
    int option;
    float balance = 1000.00;
    do
    {    
    printf("Select an option\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    scanf("%d", &option);
    switch (option) {
        int choice;
    case 1:
        checkBalance(balance);
        break;
    case 2:
        printf("How much do you want to deposit: ");
        scanf("%d", &choice);
        balance += deposit(choice);
        break;
    case 3:
        printf("How much do you want to withdraw: ");
        scanf("%d", &choice);
        withdraw(balance, choice);
        break;
    case 4:
        break;
    default:
        printf("Invalid choice!!");
    }
    } while (option != 4);

}
