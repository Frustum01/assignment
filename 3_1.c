#include<stdio.h>
void main(){
	int a,b,c,f;
	float e;
	printf("1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\nEnter your choice:");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("Enter First Number:");
			scanf("%d",&b);
			printf("Enter Second Number:");
			scanf("%d",&c);
			f=b+c;
			printf("Addition of both numbers is:%d",f);
			break;
		case 2:
		        printf("Enter the Numbers:");
		        scanf("%d %d",&b,&c);
		        f=b-c;
		        printf("Subtraction of both numbers is:%d",f);
		        break;
		case 3:
		       printf("Enter the numbers:");
	               scanf("%d %d",&b,&c);
	               f=b*c;
	               printf("Result is:%d",f);
	               break;
	        case 4:
	               printf("Enter the numbers:");
                       scanf("%d %d",&b,&c);
                       e=b/c;
                       printf("Result is:%f",e);
	              break;
		default:
		       printf("Enter Correct Choice");       
	}
}	
