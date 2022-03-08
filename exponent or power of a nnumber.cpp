#include <stdio.h>
int main()
{
	int m=15;
	int n=13;
	long long int val = 1; //(long long val(lld)....so that even the output is a very big number..the program still keeps running
	for(int i=0;i<n;i++)
	{
		val *=m;
	}
	
	printf("The value of %d to the power %d is %lld",m,n,val);
	
	return 0;
}
