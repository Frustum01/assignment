#include <stdio.h>
int main() {
float c, f;
printf("Enter temperature in Centigrade: ");
scanf("%f", &c);
f= (c* 9/5) + 32;
printf("%f Centigrade is equal to %f Fahrenheit.\n", c, f);
return 0;
}

