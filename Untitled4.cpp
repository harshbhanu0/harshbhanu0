#include <stdio.h>

int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	double sum=0.0;
	
	sum = n*(n+1)/2 ;
	
	printf("Sum is : %.2f",sum);
	
	return 0;
}
