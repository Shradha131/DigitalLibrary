#include<stdio.h>
int cmp(int a,int b);
int main()
{
	int a,b,c,d,i;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		c=cmp(a,b);
		printf("%d ",c);
		a++;
	}
	return 0;
}
int cmp(int x,int y)
{
	int i,j;
	for(j=2;j<x;j++)
	{
		if(x%j==0)
		{
	return x;
		}

	}
	
}	

