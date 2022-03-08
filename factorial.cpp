#include <stdio.h>

int factorialIterative(int n)
{
	int val = 1;
	for (int i=n;i>1;i--)
	{
		val*=i;
	}
	return val;
}

int main()
{
	int n;
	printf("Enter the number whose factorial has to be calculated\n");
	scanf("%d",&n);
	int factorial = factorialIterative(n);
	printf("The value of factorial is %d\n",factorial);
	
	return 0;
	
}
