## This is a mini project is a banking app.  

### Features
- Withdraw
- Check Balance
- Deposit
- Default balance of $1000

 

***Code Snippet***
```c
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

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


```

***Output***

```terminal
Select an option
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
1
You balance is $1000.00
Select an option
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
2
How much do you want to deposit: 100
You have succesfully deposited $100.00.
Select an option
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
1
You balance is $1100.00
Select an option
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
3
How much do you want to withdraw: 100
You have successfully withdrawn 100.00. Your Balance is 1000.00
Select an option
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
4
```

### Run
```terminal
if ($?) { gcc *.c -o main.exe } ; if ($?) { .\main.exe }
```

#### Lessons — Functions

### MADE BY [DAVEORA](https://github.com/davex-ai/)