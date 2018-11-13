#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void main()
{
	int element,cho;
	struct node *head , *temp ,*ptr;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=0;
	head->link=NULL;
	do
	{
		printf("\n -----MENU-----  \n1. Insertion \n2. Deletion \n3. Display \n4. Exit");
		printf("\nEnter the choice : ");
		scanf("%d",&cho);
		ptr=head;
		switch(cho)
		{       
			case 1:
			{
				while(ptr->link!=NULL)
				{
					ptr=ptr->link;
				}
				printf("Enter the elemants  : ");
				scanf("%d",&element);
				temp=(struct node*)malloc(sizeof(struct node));
				ptr->link=temp;
				temp->data=element;
				temp->link=NULL;
			}
			break;
			case 2:
			{
				if(ptr->link==NULL)
				{
					printf("Queue is empty!!!");
				}
				else
				{
					ptr=ptr->link;
					temp=ptr->link;
					head->link=temp;
					
					printf("Data Deleted %d", ptr->data);
					free(ptr);
				}
			}
			break;
			case 3:
			{
				if(ptr->link==NULL)
				{
					printf("Queue is empty!!!");
				}
				else
				{
					ptr=ptr->link;
					printf("Elements are :");
					while(ptr!=NULL)
					{
						printf(" %d | ", ptr->data);
						ptr=ptr->link;
					}
					printf("NULL");
				}
			}
			break;
		}
	}while(cho==1 || cho==2 || cho==3);
}	

