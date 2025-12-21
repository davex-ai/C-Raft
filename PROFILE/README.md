## This is a mini project was made to teach string methods. It is well commented with Explanatons.

### Features
- ***Learn about user***


**The code is commented neatly. With each comments explaining the block of code below it.**

***Code Snippet***
```c
 int main(){
    char name[50];
    char event[50];
    char reason[50];

    printf("Enter a Name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("What can't you wait for? ");
    fgets(event, sizeof(event), stdin);
    event[strlen(event) - 1] = '\0';


    printf("Why can't you wait for %s ?", event);
    fgets(reason, sizeof(reason), stdin);
    reason[strlen(reason) - 1] = '\0';

    printf("Hi, My name is %s. And i cant wait for %s, because %s", name, event, reason);
}

```

***Output***

```terminal
Enter a Name: Dave
What can't you wait for? New Year
Why can't you wait for New Year ?I love fireworks
Hi, My name is Dave. And i cant wait for New Year, because I love fireworks
```

### Run
```cmd
PS C-RAFT\FATHER_CHRRISTMAS> cd "C-RAFT\FATHER_CHRRISTMAS"
PS C-RAFT\FATHER_CHRRISTMAS> cd "C-RAFT\FATHER_CHRRISTMAS\" ; if ($?) { gcc *.c -o main.exe } ; if ($?) { .\main.exe }
```

#### Lessons — String methods

### MADE BY [DAVEORA](https://github.com/davex-ai/) FOR C LEARNERS