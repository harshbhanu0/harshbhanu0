#include <stdio.h>

int main()
{
	int num;
	printf("Enter the number whose multiplication table is to be printed\n");
	scanf("%d",&num);
	printf("The multiplication table of %d is \n",num);
	
	for(int i=0;i<10;i++)
	{
		printf("%dX%d=%d\n",num,i+1,(i+1)*num);
		
	}
	
	return 0;
	
}
