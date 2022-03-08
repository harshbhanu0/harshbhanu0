#include <stdio.h>

int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	double factorial=0.0;
	
	factorial = n*(n-1)*...*(n-(n-1)) ;
	
	printf("Factorial is : %.2f",factorial);
	
	return 0;
}
