#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[20];
    int tries = 0;

    while (tries < 12) {
        int hasDigit = 0, hasAlpha = 0, hasSymbol = 0;

        printf("Enter your password: ");
        scanf("%19s", password);

        if (strlen(password) < 12) {
            printf("Password must be at least 12 characters long.\n");
            tries++;
            continue;
        }

        for (int i = 0; password[i] != '\0'; i++) {
            if (isdigit((unsigned char)password[i])) hasDigit = 1;
            else if (isalpha((unsigned char)password[i])) hasAlpha = 1;
            else hasSymbol = 1;
        }

        if (!hasDigit) {
            printf("Password must contain at least one digit.\n");
            tries++;
            continue;
        }

        if (!hasAlpha) {
            printf("Password must contain alphabets.\n");
            tries++;
            continue;
        }

        if (!hasSymbol) {
            printf("Password must contain a symbol.\n");
            tries++;
            continue;
        }

        printf("✅ Password accepted!\n");
        return 0;
    }

    printf("❌ Too many attempts. Try again later.\n");
    return 0;
}
