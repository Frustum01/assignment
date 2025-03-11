#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];
    char correctUsername[] = "admin";
    char correctPassword[] = "password123";

    printf("Enter username: ");
    scanf("%s", username);
    
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, correctUsername) == 0) {
        if (strcmp(password, correctPassword) == 0) {
            printf("Login successful!\n");
        } else {
            printf("Incorrect password.\n");
        }
    } else {
        printf("Incorrect username.\n");
    }

    return 0;
}

