#include<stdio.h>
void main(){
    int a;
    printf("1");
    printf("\n2");
    printf("\n3");
    printf("\n4");
    printf("\n5");
    printf("\n6");
    printf("\n7");
    printf("\n8");
    printf("\n9");
    printf("\n10");
    printf("\n11");
    printf("\n12");
    printf("\nEnter your choice:");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("January");
        break;

        case 2:
        printf("February");
        break;

        case 3:
        printf("March");
        break;

        case 4:
        printf("April");
        break;

        case 5:
        printf("May");
        break;

        case 6:
        printf("June");
        break;

        case 7:
        printf("July");
        break;

        case 8:
        printf("August");
        break;

        case 9:
        printf("September");
        break;

        case 10:
        printf("October");
        break;

        case 11:
        printf("November");
        break;

        case 12:
        printf("December");
        break;

        default:
        printf("\nEnter Correct Choice");
    }
}
