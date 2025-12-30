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
	link(find_set(x),  find_set(y));
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
int main()
{

	make_set(0);
	make_set(1;
	make_set(2);
	make_set(3);
	make_set(4);
	
}
