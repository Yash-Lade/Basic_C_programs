#include<stdio.h>

int main()
{
	int n,rg,i,mul=1;
	
	printf("Enter the no. :");
	scanf("%d",&n);
	
	printf("Enter the range :");
	scanf("%d",&rg);
	
	printf("The table is as follows ::\n");n
	for(i=1;i<=rg;i++)
	{
		mul=i*n;
		
		printf("%d X %d =%d \n",n,i,mul);
	}
}
