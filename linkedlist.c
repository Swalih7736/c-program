#include<stdio.h>
#include<stdlib.h>
// node template
struct node
{
	int data;
	struct node *link;
};

struct node *header=NULL;
/*void createnode()
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data =10;
	newnode->link = NULL;
	
} */
void insertAtFront(int item)
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data =item;
	newnode->link = NULL; //node created
	if(header == NULL)
	{
		header = newnode;
	}
	else
	{
		newnode->link=header;
		header = newnode;
	}
}
void traversalist()
{
	struct node *ptr;
	ptr=header;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->link;
	}
	printf("/n");
}
void insertAtEnd(int item)
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data =item;
	newnode->link = NULL; //node created
	struct node *ptr;
	ptr=header;
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
		
	}
	ptr->link=newnode;
	
}
void insertAtAny(int key,int item)
{
	struct node *ptr=header;
	struct node *ptr1;
	while(ptr1 != NULL && ptr->data !=key)
	{
	 	ptr1=ptr;
	 	ptr=ptr->link;
	 	
	}	
	if(ptr==NULL)
	{
		printf("key not found ,insertion not possible ");
	}
	else
	{
		struct node *newnode;
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->data =item;
		newnode->link = ptr; //node created
		ptr1->link= newnode;
	}
int main()
{
	int q,j,value,key;
	while(j!=1)
	{
	
		printf("select a option from menu 1:3 : ");
		printf("\n1: insertion at front \n2:Insertionatend \n3:Insertionatany\n4:traversel \n4:exit");
		printf("enter your choice: ");
		scanf("%d",&q);
		if(q > 5 || q == 0)
		{
		
		printf("invalid option");
		
		}
		else
		{ 
			if(q==1)
			{
			printf("enter the value you need to insertatfront: ");
			scanf("%d",&value);
			printf("\n");
			insertAtFront(value);
					
			}
			
			
			
			
			
			else if(q==2)
			{
				printf("enter the value you need to insertatend: ");
				scanf("%d",&value);
				insertAtEnd(value);
				printf("\n");
			
			}
			
			
			
			
			
			else if(q==3)
			{	
				
				printf("enter the key ");
				scanf("%d",&key);
				printf("enter the value you need to insertatany: ");
				scanf("%d",&value);
				insertAtAny(key,value);
				printf("\n");
			}
			else if(q==4)
			{
				traversalist();
			}
			
			
			else
			{
				j=j+1;
			
			}
			
			
	
	
		}
	}

	return(0);
}



