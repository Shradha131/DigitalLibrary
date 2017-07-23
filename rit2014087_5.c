#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
   int data;
   struct node *next;
};
struct node *start=NULL;
struct node *create(struct node *);
struct node *delete(struct node *);
struct node *display(struct node *);
int main()
{   char ch;
   start=create(start);
   start=delete(start);
   start=display(start);

 return 0;
}
struct node *create(struct node *start)
{
   struct node *new_node;
   int num;
   printf("\nenter the data\n");
   printf("\nenter -1 for terminet\n");
   scanf("%d",&num);
   while(num != -1)
   {
      new_node=(struct node *)malloc(sizeof(struct node));
      new_node->data=num;
      if(start==NULL)
      {
        new_node->next=NULL;
        start=new_node;
      }
   else
      {  new_node->next=start;
         start=new_node;
      }
    printf("\nenter the data\n");
    scanf("%d",&num);
   }
return start;
}
struct node *display(struct node *start)
{
   struct node *ptr;
   ptr=start;
   while(ptr != NULL)
   {
      printf("\t%d",ptr->data);
      ptr=ptr->next;
   }
  return start;
}
struct node *delete(struct node *start)
{
   struct node *preptr,*ptr;
   int val=1;
   ptr=start;
   if(ptr->data==val)
   {
     start=delete(start);
     return start;
   }
  else
   {
       preptr=ptr;
       ptr=ptr->next;
      }
    preptr->next=ptr->next;
   free (ptr);
   return start;
 }
}

