//a program to read n numbers from user and store in an array and then rearrange the array in the reverse order.
#include <stdio.h>
int main()
{
  int a[10], i, j, n, temp;
  printf("Enter the number of array elements:\n");
  scanf("%d",&n);
  printf("Enter the array elements:\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  i = 0;
  j = n-1;
  while(i<j)
  {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i++;
    j--;
  }
  printf("The reversed array is : \n");
  for(i=0;i<n;i++)
    printf("%d\n",a[i]);
  return 0;
}
