#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter first number :");
	scanf("%d",&a);
	
	printf("Enter second number :");
	scanf("%d",&b);
	
	printf("Enter third number :");
	scanf("%d",&c);
	
	if( a>b && a>c)
	printf("%d is the largest than %d ,%d ",a,b,c);
	
	else if( b>a && b>c)
	printf("%d is the largest than %d ,%d ",b,a,c);
	
	else
	printf("%d is the largest than %d ,%d ",c,a,b);
	
}
