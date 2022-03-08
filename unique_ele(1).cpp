#include <stdio.h>
int main()
{
	int na[50],fre[50],i,j,c,n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Number in pocket [%d] ",i);
		scanf("%d",&na[i]);
		fre[i]= -1;
	}
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i+1;j<n;j++)
		{
			if(na[i]==na[j])
			{
				c++;
				fre[j]=0;
			}
		}
		if(fre[i]!=0)
		{
			fre[i]=c;
		}
	}
	printf("Unique elements are \n");
	for(i=0;i<n;i++)
	{
		if(fre[i]==1) //only difference between unique elements program and frequency program
		{
			printf("%d\t", na[i]);
		}
	}
	
	
	return 0;
}
