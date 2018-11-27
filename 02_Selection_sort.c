        //Haridev S
        //Roll no 25

#include <stdio.h>
int main()
{
   int array[25],n,i,j,pos,swap;
   printf("Enter number of elements\n");
   scanf("%d",&n);
   printf("Enter %d integers\n", n);
   for(i= 0;i<n;i++)
      scanf("%d",&array[i]);
   for(i=0;i<(n-1);i++)
   {
      pos=i;
      for (j=i+1;j<n;j++)
      {
         if( array[pos]>array[j])
            pos=j;
      }
      if(pos!=i)
      {
         swap=array[i];
         array[i]=array[pos];
         array[pos]=swap;
      }
   }
   printf("Sorted list in ascending order:\n");
   for (i=0;i<n;i++)
      printf("%d\n",array[i]);
 return 0;
}
