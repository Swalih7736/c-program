#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};   

struct node *header =NULL;
/*void createnode(int item)
{
	struct node *newnode;
	newnode=(struct node *) malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;
	
	
}*/
void insertAtFront(int item)
{
	struct node *newnode;
	newnode=(struct node *) malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;
	
	if(header == NULL)
	{
		header=newnode;	
	}
	else
	{
		newnode->link=header;
		header=newnode;
	}
}
void insertAtEnd(int item)
{
	struct node *newnode;
	newnode=(struct node *) malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;
	struct node *ptr;
	ptr=header;
	
	if(header == NULL)
	{
		header=newnode;	
	}
	else
	{
		while(ptr->link !=NULL)
		{
			ptr=ptr->link;
			
		}
		ptr->link=newnode;
	}
	
}
void insertAtAny(int item, int key)
{	struct node *ptr=header;
	struct node *ptr1;
	while(ptr!=NULL && ptr->data != key)
	{
		ptr1= ptr;
		ptr=ptr->link;
	}
	if(ptr == NULL)
	{
		printf("No value in linkedlist");
	}
	else
	{
		struct node *newnode;
		newnode=(struct node *) malloc(sizeof(struct node));
		newnode->data=item;
		newnode->link=ptr;
		ptr1->link=newnode;
	}
	
}
void deleteAtFirst()
{
	if(header==NULL)
	{
		printf("No value in linkedlist");
	}
	else
	{
		struct node *ptr=header;
		header=header->link;
		free(ptr);
	
	
	}
}
void deleteAtEnd()
{
	if(header==NULL)
	{
		printf("No value in linkedlist");
	}
	else
	{
		struct node *ptr=header;
		struct node *ptr1;
		while(ptr->link!=NULL )
		{
			ptr1= ptr;
			ptr=ptr->link;
		}
		ptr1->link=NULL;
		free(ptr);
	
	
	}
}
void display()
{
	struct node *ptr;
	ptr=header;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}
		
	

}
int main()
{
	insertAtFront(10);
	insertAtFront(34);
	insertAtFront(76);
	insertAtEnd(67);
	insertAtAny(55 ,10);
	deleteAtFirst();
	deleteAtEnd();
	display();
	
	
	
	
/*	int item,option,key;
	option=1;
	while(option!=0)
	{
		printf("Enter the options\n");
		printf("1. Insert at front\n");	
		printf("2. Insert at any\n");
		printf("3. Insert at End\n");
		printf("4. Delete at front\n");	
		printf("5. Delete at any\n");
		printf("6. Delete at End\n");
		printf("7. Display\n");
		printf("8. Exit\n");
		
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("Enter the element Insert at front\n");
				scanf("%d",&item);
				insertAtFront(item);
				break;
			case 2:
				printf("Enter the element to Insert at and the key\n");
				scanf("%d%d",&item,&key);
				insertAtAny(item ,key);
				break;
			case 3:
				printf("Enter the element Insert at End\n");
				scanf("%d",&item);
				insertAtEnd(item);
				break;
		       	case 4: 
		       		printf("Enter the element To Delete at front\n");
				scanf("%d",&item);
				deleteAtFirst(item);
				break;
		       	case 5:
				printf("Enter the element To Delete at any\n");
				scanf("%d",&item);
				deleteAtFirst(item);
				break;
			case 6:
				printf("Enter the element Insert at End\n");
				scanf("%d",&item);
				insertAtEnd(item);
				break;
			case 7:
			        printf("Enter the element to Insert at and the key\n");
				scanf("%d%d",&item,&key);
				insertAtAny(item ,key);
				break;
		       	case 8: 
		       		printf("Enter the element To Delete at front\n");
				scanf("%d",&item);
				deleteAtFirst(item);
				break;
			default:
				printf("enter valid option\n");
				break;
				
		}
	
	} */
	return 0;
}
