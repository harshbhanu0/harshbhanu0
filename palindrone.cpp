#include <stdio.h>

int main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	
	int temp=number;
	int reverse=0;
	
	while(number>0)
	{
		int dig=number%10;
		reverse=reverse*10 + dig;
		number /= 10;
		
	}
	
	if(temp==reverse)
	{
		printf("Number is a palindrome");
	}
	
	else
	{
		printf("Number is not a palindrome");
	}
	
	return 0;
		
	
		
}
