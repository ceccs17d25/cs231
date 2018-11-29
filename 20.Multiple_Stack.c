        //Haridev S
        //Roll no 25
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int arr[40],top1=0,top2=40,cho,i;

    do
    {
        
        printf("\nMENU\n\nSTACK 1        STACK 2");
                printf("\n1.PUSH         4.PUSH");
                printf("\n2.POP          5.POP");   
                printf("\n3.DISPLAY      6.DISPLAY");
                printf("\n         7.EXIT");
                printf("\nEnter Choice: ");
        scanf("%d",&cho);

        if(cho==1)
        {
            top1=top1+1;
            printf("enter the element: ");
            scanf("%d",&arr[top1]);
            printf("element pushed!!!");
        }
        else if(cho==2)
        {
            if(top1==0)
            {
                printf("stack is empty!!!");
            }
            else
            {
                printf("popped out: %d",arr[top1]);
                top1-=1;
            }
        }
        else if(cho==3)
        {
            printf("elements: ");
            for(i=top1;i>0;i--)
            {
                printf("%d |->",arr[i]);
            }
            printf("NULL");

        }
        

        else if(cho==4)
        {
            top2=top2-1;
            printf("enter the element: ");
            scanf("%d",&arr[top2]);
            printf("element pushed!!!");
        }
        else if(cho==5)
        {
            if(top2==40)
            {
                printf("stack is empty!!!");
            }
            else
            {
                printf("popped out: %d",arr[top2]);
                top2+=1;
            }
        }
        else if(cho==6)
        {
            printf("elements: ");
            for(i=top2;i<40;i++)
            {
                printf("%d |->",arr[i]);
            }
            printf("NULL");

        }
        
    }while(cho==1 || cho==2 || cho==3 || cho==4 ||cho==5 || cho==6);
    
}
OUTPUT:

	Choose

	STACK 1        STACK 2
	1.PUSH         4.PUSH
	2.POP          5.POP
	3.DISPLAY      6.DISPLAY
	Enter Choice: 1
	enter the element: 2

	Choose

	STACK 1        STACK 2
	1.PUSH         4.PUSH
	2.POP          5.POP
	3.DISPLAY      6.DISPLAY
	Enter Choice: 3
	elements: 2 
	NULL
	Choose

	STACK 1        STACK 2
	1.PUSH         4.PUSH
	2.POP          5.POP
	3.DISPLAY      6.DISPLAY
	Enter Choice: 2
	popped out: 2
	Choose

	STACK 1        STACK 2
	1.PUSH         4.PUSH
	2.POP          5.POP
	3.DISPLAY      6.DISPLAY
	Enter Choice: 3
	elements: NULL
	Choose

	STACK 1        STACK 2
	1.PUSH         4.PUSH
	2.POP          5.POP
	3.DISPLAY      6.DISPLAY
	Enter Choice: 4
	enter the element: 5

	Choose

	STACK 1        STACK 2
	1.PUSH         4.PUSH
	2.POP          5.POP
	3.DISPLAY      6.DISPLAY
	Enter Choice: 6
	elements: 5 
	NULL
	Choose

	STACK 1        STACK 2
	1.PUSH         4.PUSH
	2.POP          5.POP
	3.DISPLAY      6.DISPLAY
	Enter Choice: 5
	popped out: 5
	Choose

	STACK 1        STACK 2
	1.PUSH         4.PUSH
	2.POP          5.POP
	3.DISPLAY      6.DISPLAY
	Enter Choice: 6
	elements: NULL
