//this program is very useful..just making slight changes..many programs are made..example..count the no. of elements in an array occuring odd no. of times program
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
	printf("Count of array elements are ....\n");
	for(i=0;i<n;i++)
	{
		
		if(fre[i]!=0)
		{
			printf("%d found %d times in array \n",na[i],fre[i]);
		}
		
		
	}
	//getch(); (didn't got the meaning and showing error for this line as well)
	
	return 0;
}
