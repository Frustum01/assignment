

#include<stdio.h>
int main() {
    char forename[50], surname[50];
    int yearOfBirth;
    printf("Enter your forename: ");
    scanf("%s", forename);  
    printf("Enter your surname: ");
    scanf("%s", surname); 
    printf("Enter your year of birth: ");
    scanf("%d", &yearOfBirth); 
    printf("\nForename: %s\n", forename);
    printf("Surname: %s\n", surname);
    printf("Year of Birth: %d\n", yearOfBirth);
    return 0;
}
