#include<stdio.h>

int main()
{
	int a;
	
	printf("Enter the number :");
	scanf("%d",&a);
	
	if(a>0)
	printf("Entered value is positive !!");
	
	else if(a==0)
	printf("Entered value is zero !!");
	
	else
	printf("Entered value is negative !!");
	
}
