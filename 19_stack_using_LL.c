							//Name Haridev s
							//program name: stack using LL

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void main()
{
    int cho;
    struct node *temp,*top,*head;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=0;
    head->link=NULL;
    top=head->link;
    do
    {
        
        printf("\nMENU\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nEnter Choice: ");
        scanf("%d",&cho);

        if(cho==1)
        {
            temp=(struct node*)malloc(sizeof(struct node));
            printf("enter the element: ");
            scanf("%d",&temp->data);
            temp->link=NULL;
            head->link=temp;
            top=head->link;
        }
        else if(cho==2)
        {
            if(top==NULL)
            {
                printf("stack is empty!!!");
            }
            else
            {
                printf("popped out: %d",top->data);
                temp=top;
                top=top->link;
                head->link=top;
                free(temp);
            }
        }

        else if(cho==3)
        {
            printf("elements: ");
            temp=top;
            while(temp!=NULL)
            {
                printf("%d ",temp->data);
                temp=temp->link;
            }
        }
        
    }while(cho==1 || cho==2 || cho==3);
}

	OUTPUT:

	CHOOSE
	1.PUSH
	2.POP
	3.DISPLAY
	1
	enter the element: 2

	CHOOSE
	1.PUSH
	2.POP
	3.DISPLAY
	1
	enter the element: 5

	CHOOSE
	1.PUSH
	2.POP
	3.DISPLAY
	3
	elements: 5 ->2 ->NULL
	CHOOSE
	1.PUSH
	2.POP
	3.DISPLAY
	2
	popped out: 5
	CHOOSE
	1.PUSH
	2.POP
	3.DISPLAY
	3
	elements: 2 ->NULL

    

