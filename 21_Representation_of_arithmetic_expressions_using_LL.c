#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};
void main()
{
	char expression[25];
	int i;
	struct node *head, *temp ,*top;
	head=(struct node*)malloc(sizeof(struct node));
	head->link=NULL;
	head->data=0;
	printf("Enter the arithmetic expression :");
	scanf("%s",expression);
	top=head;
	for(i=0;i<strlen(expression);i++)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->link=top;
		temp->data=expression[i];
		top=temp;
	}
	temp=top;
	while(temp!=head)
	{
		printf("%c ",temp->data);
		temp=temp->link;
	}
	
}
		
