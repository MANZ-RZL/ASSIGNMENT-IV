//WAP a program to read two arrays and merge these two arrays into third array.

#include <stdio.h>
int main()
{
	int arr1[5]={5,10,15,20,25},arr2[5]={5,3,4,2,1},arr3[10];
	int i,j,temp,k=0;
	for (int i = 0; i < 10; i++)
	{
		if (i>4)
		{
			arr3[i] = arr2[k]
			k++;
		}
		arr3[i] = arr1[i];
	}
	return 0;
}
