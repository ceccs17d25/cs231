                                                               //program name=Singly LL
							       //pgm number 11,14a
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
	head->next=NULL;
	do
    	{
        	ptr=head;
        	printf("\nMENU\n1.Insertion (end)\n2.Insertion (in b/w)\n3.Deletion\n4.Search\n5.Display\n6.Exit\nEnter choice:");
        	scanf("%d",&cho);
        	if(cho==1)
        	{
        	    while(ptr->next!=NULL)
        	    {
        	        ptr=ptr->next;
        	    }
        	    temp=(struct node*)malloc(sizeof(struct node));
        	    ptr->next=temp;
        	    printf("Enter data: ");
        	    scanf("%d",&x);
        	    temp->data=x;
        	    temp->next=NULL;
        	}
        	else if(cho==2)
        	{
        	    printf("Enter key: ");
        	    scanf("%d",&key);
        	    ptr=ptr->next;
        	    while(ptr!=NULL)
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
        	        while(ptr->next!=NULL)
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
        	    while(ptr!=NULL)
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
        	    while(ptr!=NULL)
        	    {
        	        printf("%d, ",ptr->data);
        	        ptr=ptr->next;
        	    }
        	    printf("NULL");
        	}
    }while(cho==1 || cho==2 || cho==3 || cho==4 || cho==5);
}

