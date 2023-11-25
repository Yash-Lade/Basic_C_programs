#include<stdio.h>

int main()
{
	int a,b,mul=1,i;
	
	printf("Enter the number :");
	scanf("%d",&a);
	
	for(i=a;i>=1;i--)
	{
		mul=mul*i;
		
	}
	printf("The required factorial is :%d",mul);
}
