#include<stdio.h>
int parent[50];rank[50];
void make_set(int x)
{
	parent[x]=x;
	rank[x]=0;

}
void find_set(int x)
{
	if(x != parent[x])
		parent[x] = find_set(parent[x]);
	return(parent [x]);
}

void link(int x,int y)
{
	if(x!=y)
	{
		if(rank[x]>rank[y])
		{
			parent[y]=x;
		}
		else 
		{
			parent[x]=y;
			
		}
		
		if(rank[x]  ==  rank[y])
		{
			rank[y]=rank[y]+1;
		
		}
	}
}
void union(int x,int y)
{
	link(find_set(x),  find_set(y));
}
int main()
{

	make_set(0);
	make_set(1;
	make_set(2);
	make_set(3);
	make_set(4);
	
	
	union(0,1);
	union(1,2);
	union(3,4);
	union(5,6);
	union(4,5);
	union(2,6);
	
	
	
	for(int i=0;i<7;i++)
		printf("%d",parent[i]);
	return(0);
	
}
