## This is a mini project is a SHOP_MART.

### Features
- ***SHOP_MART***
- Buy out random items
- Get receipt in the cli
 
***Code Snippet***
```c
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

```

***Output***

```terminal
What item would you like to buy? oranges
What is the price of each? 12.99
How many would you like? 6
You have bought 6 oranges at the cost of $77.94
==============================
=========YOUR RECEIPT========
  ITEMS   QUANTITY   AMOUNT
   oranges       6      12.99
TOTAL----------------77.94
THANK YOU FOR SHOPPING WITH US
=========================
```

### Run
```cmd
PS C-RAFT\SHOP_MART> cd "C-RAFT\SHOP_MART"
PS C-RAFT\SHOP_MART> cd "C-RAFT\SHOP_MART\" ; if ($?) { gcc *.c -o main.exe } ; if ($?) { .\main.exe }
```

### MADE BY [DAVEORA](https://github.com/davex-ai/) 