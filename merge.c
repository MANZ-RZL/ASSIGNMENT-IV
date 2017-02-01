//WAP a program to read two arrays and merge these two arrays into third array. Some problems.

#include <stdio.h>
int main()
{
	int arr1[5]={5,10,15,20,25};
	int arr2[5]={5,3,4,2,1};
	int arr3[10];
	int i,j,temp,k=0;
	for (int i = 0; i < 10; i++)
	{
		if (i>4)
		{
			arr3[i] = arr2[k];
			k++;
		}
		arr3[i] = arr1[i];
	}
	printf("Elements are :\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[3]);
	}
	for (int i = 0; i < 10-1; i++)
	{
		for (int j = i+1; i < 10; j++)
		{
			if (arr[j]<arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Sorted Elements are :\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d",arr3[i]);
	}
	return 0;
}
