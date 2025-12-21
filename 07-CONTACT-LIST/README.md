### This folder in a mini project is for Store contacts in memory.  

### Features
- ***File.io***

***Code Snippet***
```C
main(){
    char contacts[3][100];
    int size = sizeof(contacts) / sizeof(contacts[0]);
    
    for (int i = 0; i < size; i++) {
        printf("Enter a name: ");
        scanf("%s", contacts[i]);
    }
    printf("My contacts: ");
    for (int i = 0; i < size; i++) {
        printf("%s ", contacts[i]);
    }
}
```

***Output***

```terminal
Enter a name: carlos
Enter a name: saamin
Enter a name: seraphine
My contacts: carlos saamin seraphine
```

### Run
```cmd
 if ($?) { gcc *.c -o main.exe } ; if ($?) { .\main.exe }
```


### MADE BY [DAVEORA](https://github.com/davex-ai/) 