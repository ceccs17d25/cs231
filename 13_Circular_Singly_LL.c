                                                               //program name=13,14C.Circular_Singly_LL.c
							       //Haridev s



#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void main()
{
	int key,x,cho,flag;
	struct node *head,*temp,*ptr,*ptr1;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=0;
	head->next=head;
	do
    	{
        	ptr=head;
        	printf("\nMENU\n1.Insertion (end)\n2.Insertion (in b/w)\n3.Deletion\n4.Search\n5.Display\n6.Exit\nEnter choice:");
        	scanf("%d",&cho);
        	if(cho==1)
        	{
        	    while(ptr->next!=head)
        	    {
        	        ptr=ptr->next;
        	    }
        	    temp=(struct node*)malloc(sizeof(struct node));
        	    ptr->next=temp;
        	    printf("Enter data: ");
        	    scanf("%d",&x);
        	    temp->data=x;
        	    temp->next=head;
        	}
        	else if(cho==2)
        	{
        	    printf("Enter key: ");
        	    scanf("%d",&key);
        	    ptr=ptr->next;
        	    while(ptr!=head)
        	    {
        	        if(ptr->data==key)
        	        {
        	            temp=(struct node*)malloc(sizeof(struct node));
        	            ptr1=ptr->next;
        	            ptr->next=temp;
        	            temp->next=ptr1;
        	            printf("Enter data: ");
        	            scanf("%d",&x);
        	            temp->data=x;
	
        	        }
        	        ptr=ptr->next;
        	    }
        	}
        	else if(cho==3)
        	{
        	    if(ptr->next==NULL)
        	    {
        	        printf("List is empty!!!");
        	    }
        	    else
        	    {
        	        printf("Enter key: ");
        	        scanf("%d",&key);
        	        flag=0;
        	        while(ptr->next!=head)
        	        {
        	            ptr1=ptr;
        	            ptr=ptr->next;
        	            if(ptr->data==key)
        	            {
        	                ptr1->next=ptr->next;
        	                free(ptr);
        	                flag+=1;
        	            }
        	        }
        	        if(flag==0)
        	        {
        	            printf("Key not found!!!");
        	        }
        	    }
        	}
        	else if(cho==4)
        	{
        	    if(ptr->next==NULL)
        	    {
        	        printf("Empty list!!!");
        	    }
        	    ptr=ptr->next;
        	    flag=0;
        	    printf("Enter key: ");
        	    scanf("%d",&key);
        	    while(ptr!=head)
        	    {
        	        if(ptr->data==key)
        	        {
        	            printf("\nElement found...");
        	            flag+=1;
        	        }
        	        ptr=ptr->next;
        	    }
        	    if(flag==0)
        	    {
        	        printf("\nElement not found...");
        	    }
        	}
        	else if(cho==5)
        	{
        	    ptr=ptr->next;
        	    while(ptr!=head)
        	    {
        	        printf("%d, ",ptr->data);
        	        ptr=ptr->next;
        	    }
        	    temp=ptr->link;
                    printf("%d",temp->data);

        	}
    }while(cho==1 || cho==2 || cho==3 || cho==4 || cho==5);
}
OUTPUT:

	CHOOSE
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion
	5.Search
	6.Display
	Enter choice:1
	Enter data: 5

	CHOOSE
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion
	5.Search
	6.Display
	Enter choice:2
	Enter data: 6

	CHOOSE
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion
	5.Search
	6.Display
	Enter choice:3
	Enter key: 5
	Enter data: 7

	CHOOSE
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion
	5.Search
	6.Display
	Enter choice:4
	Enter key: 7

	CHOOSE
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion
	5.Search
	6.Display
	Enter choice:5
	Enter key: 6

	Element found at 2
	CHOOSE
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion
	5.Search
	6.Display
	Enter choice:6
	5   6   
	CHOOSE
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion
	5.Search
	6.Display
	Enter choice:9

