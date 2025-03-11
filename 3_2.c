#include<stdio.h>
void main(){
	int a;
	float b,c,d;
	printf("1.Area of Rectangle");
	printf("\n2.Area of Circle");
	printf("\n3.Area of Square");
	printf("\n4.Area of Sphere");
	printf("\n5.Area of Hemisphere");
	printf("\nEnter your choice:");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("Enter length and breadth of rectangle:");
			scanf("%f %f",&b,&c);
			d=b*c;
			printf("Area is:%f",d);
			break;
		case 2:
		        printf("Enter the radius:");
		        scanf("%f",&b);
		        d=3.14*b*b;
		        printf("Area is:%f",d);
			break;
		case 3:
		       printf("Enter the side of square:");
	               scanf("%f",&b);
	               d=b*b;
	               printf("Area is:%f",d);
	               break;	       
                case 4:
		       printf("Enter the Radius of Sphere:");
		       scanf("%f", &b);
		       d=4*3.14*b*b;
		       printf("Area is:%f",d);
		       break;

		case 5:
		       printf("Enter the Radius of Hemisphere:");
		       scanf("%f", &b);
		       d=3*3.14*b*b;
		       printf("Area of Hemisphere is:%f",d);
		       break;
		default:
		      printf("\nEnter Correct Choice");
	}
}	
		      

