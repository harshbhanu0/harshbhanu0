/*int main() {
 int arr1[5],arr2[5];
 printf("Enter 5 integers: ");
 // taking input and storing it in an array
 for(int i = 0; i < 5; ++i) {
 scanf("%d", &values[i]);
 }
 printf("Displaying integers: ");
 // printing elements of an array
 for(int i = 0; i < 5; ++i) {
 printf("%d\n", values[i]);
 
 for(i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }
    
    printf("\n\nThe elements copied into the second array are :\n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", arr2[i]);
    }
	       printf("\n\n");

 }
 return 0;
}*/


#include <stdio.h>
int main()
{
	int arr1[5] , arr2[5];
	printf("Enter 5 integers: ");
	for (int i=0;i<5;++i)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Displaying integers: ");
	
	for(int i=0;i<5;++i)
	{
		printf("%d\n",arr1[i]);
		
		for(i=0;i<5;i++)
		{
			arr2[i] = arr1[i];
		}
		
		printf("\n\nThe elements copied into the second are :\n");
		for(i=0;i<5;i++)
		{
			printf("%5d",arr2[i]);
		}
				printf("\n\n");
	}
	return 0;
}

