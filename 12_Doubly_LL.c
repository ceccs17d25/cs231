							//program name=Doubly_LL.c 12,14B
						        //Haridev s



#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *llink,*rlink;
};

void main()
{
    int key,x,cho,flag;
    struct node *head,*temp,*ptr,*ptr1,*ptr2;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=0;
    head->llink=NULL;
    head->rlink=NULL;

    do
    {
        ptr=head;
        printf("\nMENU\n1.Insertion (end)\n2.Insertion (in b/w)\n3.Insertion (begining)\n4.Deletion\n5.Search\n6.Display\n7.Exit\nEnter choice:");
        scanf("%d",&cho);
        if(cho==1)
        {
            while(ptr->rlink!=NULL)
            {
                ptr=ptr->rlink;
            }
            temp=(struct node*)malloc(sizeof(struct node));
            ptr->rlink=temp;
            printf("Enter data: ");
            scanf("%d",&x);
            temp->data=x;
            temp->rlink=NULL;
            temp->llink=ptr;
        }
        else if(cho==2)
        {
            printf("Enter key: ");
            scanf("%d",&key);
            ptr=ptr->rlink;
            while(ptr!=NULL)
            {
                if(ptr->data==key)
                {
                    temp=(struct node*)malloc(sizeof(struct node));
                    ptr1=ptr->rlink;
                    ptr->rlink=temp;
                    temp->llink=ptr;
                    ptr1->llink=temp;
                    temp->rlink=ptr1;
                    printf("Enter data: ");
                    scanf("%d",&x);
                    temp->data=x;

                }
                ptr=ptr->rlink;
            }
        }

        else if(cho==3)
        {
            printf("Enter key: ");
            scanf("%d",&key);
            if(ptr->rlink==NULL)
            {
                temp=(struct node*)malloc(sizeof(struct node));
                ptr->rlink=temp;
                temp->llink=ptr;
                temp->rlink=NULL;
                temp->data=key;
            }
            else 
            {
                temp=(struct node*)malloc(sizeof(struct node));
                ptr1=ptr->rlink;
                ptr->rlink=temp;
                temp->llink=ptr;
                temp->rlink=ptr1;
                ptr1->llink=temp;
                temp->data=key;
            }
        }
        else if(cho==4)
        {
            if(ptr->rlink==NULL)
            {
                printf("List is empty!!!");
            }
            else
            {
                printf("Enter key: ");
                scanf("%d",&key);
                flag=0;
                while(ptr->rlink!=NULL)
                {
                    ptr1=ptr;
                    ptr=ptr->rlink;
                    ptr2=ptr->rlink;
                    if(ptr->data==key)
                    {
                        if(ptr->rlink==NULL)
                        {
                            ptr1=ptr->llink;
                            ptr1->rlink=NULL;
                            free(ptr);
                            flag+=1;    

                        }
                        else
                        {
                            ptr1=ptr->llink;
                            ptr2=ptr->rlink;
                            ptr1->rlink=ptr2;
                            ptr2->llink=ptr1;
                            free(ptr);
                            flag+=1;
                        }
                    }
                }
                if(flag==0)
                {
                    printf("Key not found!!!");
                }
            }
        }
        else if(cho==5)
        {
            if(ptr->rlink==NULL)
            {
                printf("Empty list!!!");
            }
            else
            {
                ptr=ptr->rlink;
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
                    ptr=ptr->rlink;
                }
                if(flag==0)
                {
                    printf("\nElement not found...");
                }
            }
        }
        else if(cho==6)
        {
            ptr=ptr->rlink;
            while(ptr!=NULL)
            {
                printf("%d, ",ptr->data);
                ptr=ptr->rlink;
            }
          
        }
    }while(cho==1 || cho==2 || cho==3 || cho==4 || cho==5 || cho==6);
}
OUTPUT:

	MENU
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(begin)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:1
	Enter data: 1

	MENU
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(begin)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:2
	Enter data: 2

	MENU
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(begin)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:8
	1 -> 2 -> NULL
	MENU
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(begin)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:3
	Enter key: 3 1
	Enter data: 3

	MENU
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(begin)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:8
	1 -> 3 -> 2 -> NULL
	MENU
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(begin)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:4

	MENU
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(begin)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:8
	3 -> 2 -> NULL
	MENU
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(begin)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:5

	MENU
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(begin)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:8
	3 -> NULL
	MENU
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(begin)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:6
	Enter key: 3

	MENU
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(begin)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:8
	NULL
	MENU
	1.Insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(begin)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:7
	Empty list!!!

