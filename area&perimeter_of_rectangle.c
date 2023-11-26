#include<stdio.h>

int main()
{
	int  l,w,p,a;
	
	printf("Enter the value of length :");
	scanf("%d",&l);
	printf("Enter the value of width :");
	scanf("%d",&w);
	
	p=2*(l+w);
	
	printf("The perimeter of given rectangle is :%d\n",p);
	
	a=l*w;
	
	printf("The area of given rectangle is :%d",a);
}
