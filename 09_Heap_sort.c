        //Haridev S
        //Roll no 25
#include<stdio.h>
void main()
{
	int heap[10],n,i,j,s,root,temp;
	printf("\nEnter the no.of elements : ");
	scanf("%d",&n);
	printf("\nEnter the elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&heap[i]);
	for(i=1;i<n;i++)
	{
		s=i;
		do
		{
			root=(s-1)/2;
			if(heap[root]<heap[s])
			{
				temp=heap[root];
				heap[root]=heap[s];
				heap[s]=temp;
			}
			s=root;
		}while(s!=0);
	}
	printf("Heap array : ");
	for(i=0;i<n;i++)
		printf("%d \n",heap[i]);
	for(j=n-1;j>=0;j--)
	{
		temp=heap[0];
		heap[0]=heap[j];
		heap[j]=temp;
		root=0;
		do
		{
			s=2*root+1;
			if((heap[s]<heap[s+1])&&s<j-1)
				s++;
			if(heap[root]<heap[s]&&s<j)
			{
				temp=heap[root];
				heap[root]=heap[s];
				heap[s]=temp;
			}
			root=s;
		}while(s<j);
	}
		printf("\nThe sorted array is :");
		for(i=0;i<n;i++)
			printf("%d \n  ",heap[i]);
		printf("\n");
}

