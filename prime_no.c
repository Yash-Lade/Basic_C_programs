#include<stdio.h>

int main()
{
	int a,i,flag=0;
	
	printf("Enter the number :");
	scanf("%d",&a);
	
	for(i=2;i<=a-1;i++)
	{
		if(a%i==0)
		{
			flag=flag+i;
		}
	}
	
	if(flag==0)
	printf("The entered no. is prime number.");
	
	else
	printf("The entered no. is not a prime number.");
	
	return 0;
}
