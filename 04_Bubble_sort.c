        //04_Bubble_sort
        //Haridev S
        //Roll no 25
#include <stdio.h>
int main()
{
  int array[100],n,i,j,swap;
  printf("Enter number of elements\n");
  scanf("%d",&n);
  printf("Enter %d integers\n", n);
  for(i=0;i<n;i++)
    scanf("%d",&array[i]);
  for (i=0;i<n-1;i++)
  {
    for (j=0;j<n-i-1;j++)
    {
      if (array[j]>array[j+1]) 
      {
        swap=array[j];
        array[j]=array[j+1];
        array[j+1]=swap;
      }
    }
  }
  printf("Sorted list in ascending order:\n");
  for (i=0;i<n;i++)
     printf("%d\n",array[i]);
 return 0;
}
        OUTPUT
Enter number of elements
3
Enter 3 integers
3
2 
1
Sorted list in ascending order:
1
2
3

