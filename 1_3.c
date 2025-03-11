#include <stdio.h>
int main() {
float kmph, mph;
printf("Enter speed in kilometers per hour: ");
scanf("%f", &kmph);
mph = kmph*0.621;
printf("%f is kmph and %f is mph", kmph, mph);
return 0;
}


