#include<stdio.h>

int main()
{
	int a,b;

	printf("@Author - Yash Lade !!\n");
	printf("Enter first number :");
	scanf("%d",&a);
	
	printf("Enter second number :");
	scanf("%d",&b);
	
	printf("The value before swapping is a=%d and b=%d \n",a,b);
	int temp;
	
	temp=a;
	
	a=b;
	
	b=temp;
	
	printf("The value after swapping is a=%d and b=%d ",a,b);
}
