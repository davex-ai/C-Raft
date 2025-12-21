#include <stdio.h>

int main(){
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