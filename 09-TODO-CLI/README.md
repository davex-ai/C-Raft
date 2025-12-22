### This folder in a mini project is a To-Do List (RAM only).  

### Features
- ***Get element***
- ***Add element***
- ***Clear list of element***
- ***Edit element***

***Code Snippet***
```C
    int main (){
        case 1:
            for (int i = 0; i < 3; i++)
            {
                printf("Enter your new task:");
                getchar();
                fgets(to_do[i], sizeof(to_do[i]), stdin);
                to_do[i][strlen(to_do[i]) - 1] = '\0';
            }
            break;
        case 2:
            for (int i = 0; i < 3; i++)
            {
                to_do[i][0] = '\0';
            }

            break;
        case 3:
        {
            int index;
            char value[50];

            printf("Task number to edit (1-3): ");
            scanf("%d", &index);

            if (index < 1 || index > 3)
            {
                printf("Invalid task number\n");
                break;
            }
    }
    }
```

***Output***

```terminal
 WELCOME TO YOUR TO DO LIST
WHAT DOULD YOU LIKE TO DO TODAY
 1. Add task
 2. clear task
 3. Edit task
 4. See pending tasks
 5. Exit
1
Enter your new task:leetcode 5 easy
Enter your new task:buy fuel 
Enter your new task:eat burger
 1. Add task
 2. clear task
 3. Edit task
 4. See pending tasks
 5. Exit
3
Task number to edit (1-3): 2
Enter new value: buy groceries
 1. Add task
 2. clear task
 3. Edit task
 4. See pending tasks
 5. Exit
4
Your pending tasks include
1. leetcode 5 easy
2. buy groceries
3. at burger
 1. Add task
 2. clear task
 3. Edit task
 4. See pending tasks
 5. Exit
2
 1. Add task
 2. clear task
 3. Edit task
 4. See pending tasks
 5. Exit
4
Your pending tasks include
1.
2.
3.
 1. Add task
 2. clear task
 3. Edit task
 4. See pending tasks
 5. Exit
```

### Run
```cmd
 if ($?) { gcc *.c -o main.exe } ; if ($?) { .\main.exe }
```


### MADE BY [DAVEORA](https://github.com/davex-ai/) 