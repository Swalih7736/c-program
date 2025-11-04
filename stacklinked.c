#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5

int counter= 0;
struct node
{
	int data;
	struct node *link;
};
struct node *top=NULL;
/*struct createnode(int item)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=10;
	newnode->link=NULL;
	
}*/
void push(int item)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;
	if(top==NULL)
	{
		top=newnode;
	}
	else
	{
		if(counter <= MAX_SIZE)
		{
			newnode->link=top;
			top=newnode;
			counter = counter +1;
		}
		else
			printf("stack is full");
			
	}
}
void pop()
{
	struct node *ptr;
	if(top==NULL)
	{
		printf("the linkedlist is empty");
	}
	else{
		
		if(counter <= 0){
			ptr=top;
			top=top->link;
			//printf("Delted element is %d",ptr->data);
			free(ptr);
			counter--;
			}
	}
}
void display()
{
	struct node *ptr;
	ptr=top;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}
		
	

}
int main()
{
	push(45);
	push(20);
	push(15);
	push(30);
	push(80);
	push(94);
	display();
	

}
