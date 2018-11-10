#include<stdio.h>
#include<stdlib.h>
 
struct node
{
	int data;
	struct node *link;
};

void main()
{
	int x,cho,key,flag;
	struct node *ptr, *ptr1, *temp, *head;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=0;
	head->link=NULL;
	do
	{
		ptr=head;
		printf("\n --MENU--- \n1. Insertion(beginng)\n2. Insertion(end) \n3. search \n4. Display \n5. Deletion after key\n6. Exit");
		printf("\nEnter the choice :");
		scanf("%d",&cho);
		if(cho==1)
		{
			printf("Enter the data :");
			scanf("%d",&x);
			temp=(struct node*)malloc(sizeof(struct node));
			temp->data=x;
			ptr->link=temp;
			temp->link=NULL;
			
		}
		else if(cho==2)
		{
			while(ptr->link!=NULL)
			{
				ptr=ptr->link;
			}
			printf("Enter the data :");
			scanf("%d",&x);
			temp=(struct node*)malloc(sizeof(struct node));
			temp->data=x;
			ptr->link=temp;
			temp->link=NULL;
		}
		else if(cho==3)
		{
			if(ptr->link==NULL)
			{
				printf("Linked list is empty");
			}
			printf("Enter the key to be search : ");
			scanf("%d",&key);
			flag=0;
			ptr=ptr->link;			
			while(ptr!=NULL)
			{
				if(ptr->data==key)
				{
					printf("\ndata found");
					flag=1;
						 
				}
				ptr=ptr->link;
			
			}
			if(flag==0)
			{
				printf("\ndata not found");
			}
		}			
		else if(cho==4)
		{
			if(ptr->link==NULL)
			{
				printf("Linked list is empty");
			}
			else
			{
				ptr=ptr->link;
				printf("linked list elements are :");
				while(ptr!=NULL)
				{
					printf(" %d |",ptr->data);
					ptr=ptr->link;
				}
				printf(" NULL");
			}
		}
		else if(cho==5)
		{
			if(ptr->link==NULL)
			{
				printf("\nlinked list is empty");
			}
			else
			{
				
				flag=0;
				printf("\nEnter key element");
				scanf("%d",&key);
				while(ptr->link!=NULL)
				{
					ptr1=ptr;
					ptr=ptr->link;
					
					if(ptr->data==key)
					{
						ptr1->link=ptr->link;
						free(ptr);
						flag+=1;
					}
				}
				if(flag==0)
				{
					printf("Element not found!!!");
				}
			}
		}
	}while(cho==1||cho==2||cho==3||cho==4||cho==5);
}

