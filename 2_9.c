#include <stdio.h>
#include<string.h>
int main() {
    int rollNo, physics, chemistry, computerApplication, totalMarks;
    float percentage;
    char name[50];
    char division[20];

    printf("Input the Roll Number of the student: ");
    scanf("%d", &rollNo);

    printf("Input the Name of the Student: ");
    scanf("%s", name);

    printf("Input the marks of Physics, Chemistry and Computer Application: ");
    scanf("%d %d %d", &physics, &chemistry, &computerApplication);

    totalMarks = physics + chemistry + computerApplication;
    percentage = (totalMarks / 300.0) * 100;

    if (percentage >= 60) {
        strcpy(division, "First");
    } else if (percentage >= 50) {
        strcpy(division, "Second");
    } else if (percentage >= 40) {
        strcpy(division, "Third");
    } else {
        strcpy(division, "Fail");
    }

    printf("\nRoll No: %d\n", rollNo);
    printf("Name of Student: %s\n", name);
    printf("Marks in Physics: %d\n", physics);
    printf("Marks in Chemistry: %d\n", chemistry);
    printf("Marks in Computer Application: %d\n", computerApplication);
    printf("Total Marks = %d\n", totalMarks);
    printf("Percentage = %.2f\n", percentage);
    printf("Division = %s\n", division);

    return 0;
}

