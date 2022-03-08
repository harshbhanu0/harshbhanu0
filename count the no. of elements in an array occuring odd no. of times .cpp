// just slight change in line34 of freq_proper_always_applicable program...rest program is exactly same...
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
	printf("Count of array elements occuring odd number of times are ....\n");
	for(i=0;i<n;i++)
	{
		
		if(fre[i]!=0 && fre[i]%2!=0)
		{
			printf("%d found %d times in array \n",na[i],fre[i]);
		}
		
		
	}
	//getch(); (didn't got the meaning and showing error for this line as well)
	
	return 0;
}
