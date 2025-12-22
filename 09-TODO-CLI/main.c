#include <stdio.h>
#include <string.h>

int main()
{
    char to_do[3][50];
    int choice = 0;
    printf("WELCOME TO YOUR TO DO LIST\nWHAT DOULD YOU LIKE TO DO TODAY\n");
    while (choice != 5)
    {
        printf(" 1. Add task\n 2. clear task\n 3. Edit task\n 4. See pending tasks\n 5. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
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

            getchar(); // clear buffer
            printf("Enter new value: ");
            fgets(value, sizeof(value), stdin);
            value[strcspn(value, "\n")] = '\0';

            strcpy(to_do[index - 1], value);
            break;
        }

        case 4:
            printf("Your pending tasks include\n2");
            for (int i = 0; i < 3; i++)
            {
                printf("%d. %s\n", i + 1, to_do[i]);
            }
            break;
        case 5:
            break;

        default:
            printf("INVALID INPUT");
            break;
        }
    }
}
