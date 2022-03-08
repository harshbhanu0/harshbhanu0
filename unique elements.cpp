//icorrectprogram..go and refer unique_ele(1) prog
//not getting correct output
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
			if (arr[i]==arr[j] && i!=j )
			{
			
				k+=1;
				break;
			}
			
			//was not able to understand these lines of code from 29 to 31
			if(j == n ){
         	printf("\nunique elements in an array is [%d] : %d \n",k,arr[i]);
         	++k;
      		}
		}
	}
	printf("Total number of unique elements found in the array is : %d",k);
	return 0;
}
