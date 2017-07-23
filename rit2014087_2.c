#include<stdio.h>
#include<stdlib.h>
int con(char,char);
int main()
{
	char a[100],b[100],c[100];
	scanf("%s %s",a,b);
	c=con(char a[],char b[]);
	printf("%s",c);
	return 0;
}
int con(char a[],char b[])
{
	int i,j,s;
	i=atoi(a);
	j=atoi(b);
	s=i+j;
	printf("%d",s);
}
