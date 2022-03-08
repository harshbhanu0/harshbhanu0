#include <stdio.h>
int main()
{
	int a[5],i,freq=0,key;
	for(i=0;i<5;i++)
	{
		printf("Enter integers to be inserted: ");
		scanf("%d",&a[i]);
	}
	printf("\nEnter number  whose frequency is to calculated: ");
	
	scanf("%d",&key);
	for(i=0;i<10;i++)
	if(a[i]==key)
	{
		freq++;
	}
	
	printf("\nFrequency of %d is %d",key,freq);
	
	return 0;
}
