#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    int largest;

    if (num1 >= num2) {
        if (num1 >= num3) {
            if (num1 >= num4) {
                if (num1 >= num5) {
                    largest = num1;
                } else {
                    largest = num5;
                }
            } else {
                if (num4 >= num5) {
                    largest = num4;
                } else {
                    largest = num5;
                }
            }
        } else {
            if (num3 >= num4) {
                if (num3 >= num5) {
                    largest = num3;
                } else {
                    largest = num5;
                }
            } else {
                if (num4 >= num5) {
                    largest = num4;
                } else {
                    largest = num5;
                }
            }
        }
    } else {
        if (num2 >= num3) {
            if (num2 >= num4) {
                if (num2 >= num5) {
                    largest = num2;
                } else {
                    largest = num5;
                }
            } else {
                if (num4 >= num5) {
                    largest = num4;
                } else {
                    largest = num5;
                }
            }
        } else {
            if (num3 >= num4) {
                if (num3 >= num5) {
                    largest = num3;
                } else {
                    largest = num5;
                }
            } else {
                if (num4 >= num5) {
                    largest = num4;
                } else {
                    largest = num5;
                }
            }
        }
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}

