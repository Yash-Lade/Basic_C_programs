#include<stdio.h>

int fact(int);

int main()
{
	int n,b;

	printf("@Author - Yash Lade !!/n";
	
	
	printf("Enter the number :");
	scanf("%d",&n);
	
	b=fact(n);
	
	printf("The factorial of %d is : %d",n,b);
}

int fact(n)
{
	if (n==1)
	return 1;
	
	else
	return n*fact(n-1);
}
