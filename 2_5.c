#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter the first angle: ");
    scanf("%d", &angle1);

    printf("Enter the second angle: ");
    scanf("%d", &angle2);

    printf("Enter the third angle: ");
    scanf("%d", &angle3);

    if (angle1 + angle2 + angle3 == 180) {
        printf("The triangle can be formed.\n");
    } else {
        printf("The triangle cannot be formed.\n");
    }

    return 0;
}

