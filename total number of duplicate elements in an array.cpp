#include <stdio.h>

int main()
{
	int arr[100],i,n,j,k;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	
	printf("Input %d elements in the array :\n",n);
	
	for(i=0;i<n;i++)
	{
		printf("element - %d : ",i);
		scanf("%d",&arr[i]);
	}
	k=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (arr[i]==arr[j])
			{
			
				k+=1;
				break;
			}
		}
	}
	printf("Total number of duplicate elements found in the array is : %d",k);
	return 0;
}
