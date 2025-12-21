#include <stdio.h>
#include <string.h>

int main(){
    printf("Hello\n");
    int age;
    float gpa;
    char grade;
    char name[30];
    char hobby[50];

    printf("Enter your name: ");
    scanf("%s", &name);
    // fgets(name, sizeof(name), stdin) to enter ur full name since c doesnt read white spaces

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);
    getchar();

    printf("Enter 2 of your hobbies: ");
    fgets(hobby, sizeof(hobby), stdin);
    hobby[strlen(hobby) - 1] = '\0';
    
    printf("%s is %d years old and they scored %.2f with grade %c. Hobbies include: %s", name, age, gpa, grade, hobby);
}