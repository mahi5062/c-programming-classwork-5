#include<stdio.h>
int main()
{
	int arr1[]={10,20};
	int arr2[]={30,40};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
	int size = size1 + size2;
	int arr[size];
	int i,j;
	
	for (i=0;i<size1;i++)
	{
		arr[i]=arr1[i];
	}
	for (j=0;j<size2;j++)
	{
		arr[i]=arr2[j];
		i++;
	}
    printf("Concatenated array: ");
    for (i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    
   return 0;
}
