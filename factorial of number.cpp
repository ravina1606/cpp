#include<stdio.h>
int factorial(int n)
{
	if(n==0)
	return 1;
	else
	return n*factorial(n-1);
	
}
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(num<0)
	printf("factorial is not defined. \n");
	else
	printf("factorial of %d=%d\n",num,factorial(num));
	
	return 0;
	
}