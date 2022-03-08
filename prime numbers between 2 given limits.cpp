#include <stdio.h>

int isPrime(int n)
{
	for(int i=2;i*i<=n;i++)  //less than or EQUAL TO....veryy inportant crux note..mostly people forget equal to
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	int n1,n2;
	printf("Enter the starting limit: \n");
	scanf("%d",&n1);
	
	printf("Enter the ending limit: \n");
	scanf("%d",&n2);
	
	printf("The prime numbers between %d and %d are: ",n1,n2);
	
	for(int i=n1;i<=n2;i++) //less than or EQUAL TO....veryy inportant crux note..mostly people forget equal to
	{
		if(isPrime(i))
		{
			printf("%d\t",i);
		}
	}
	
	return 0;
	
}
