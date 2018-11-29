        //Haridev S
        //Roll no 25


#include <stdio.h>
int main()
{
  int array[25],search,i,n;
  printf("Enter the number of elements in array\n");
  scanf("%d", &n);
  printf("Enter %d integer\n",n);
  for (i=0;i<n;i++)
    scanf("%d", &array[i]);
  printf("Enter a number to search\n");
    scanf("%d", &search);
  for (i=0;i<n;i++)
  {
    if (array[i]==search) 
    {
      printf("%d is present at location %d.\n",search,i+1);
      break;
    }
  }
  if (i==n)
    printf("%d isn't present in the array.\n", search);
  return 0;
}
		OUTPUT
Enter the number of elements in array
5
Enter 5 integer
3
2
7
4
8
Enter a number to search
7
7 is present at location 3.

