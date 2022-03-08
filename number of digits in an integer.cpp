//can count only upto max 19 digits...if a number greater than 19 digit is enterd..the output is 19
#include <stdio.h>

int main()
{
	long long int n;
	long long int counter=0;
	printf("Enter the number\n");
	scanf("%lld",&n);
	
	if (n==0)
	{
		printf("There is only 1 digit in your number");
	}
	
	else
	{
		while(n!=0)
		{
			n=n/10; //n/=10
			counter++ ;
		}
		
		printf("There are %lld digits in your number",counter);
		
		return 0;
	}
}
