#include <stdio.h>

// practice for if we have to insert in a sorted array like we hav to insert 7 in the array containing the elements 1,2,3,4,5,8,67,98,123

void display(int arr[],int n)
{
	//code for traversal
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

int indInsertion(int arr[],int size,int element,int capacity,int index)
{
	//code for insertion
	if(size>=capacity)
	{
		return -1;
	}
	
	for(int i=size-1;i>=index;i--)
	{
		arr[i+1] = arr[i];
	}
	
	arr[index] = element;
	return 1;
}
int main()
{
	int arr[100] = {7,8,12,27,28};
	int size=5,element=45,index=3;
	display(arr,size);
	indInsertion(arr,size,element,100,index);
	size+=1;
	display(arr,size);
	return 0;
}
