#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
       int data;
       struct node *next;
       };
       
void add(struct node **s, int a){
     struct node *temp;
     struct node *save;
     if(*s==NULL){
                    temp=malloc(sizeof(struct node));
                  temp->data=a;
                   temp->next=NULL;
                  *s=temp;
                  }else{
                        temp=*s;
                        while(temp->next!=NULL){
                                          temp=temp->next;
                                          }
                           save=malloc(sizeof(struct node));
                        save->data=a;
                        save->next=NULL;
                        temp->next=save;
                        }
                  }
                 
void add_begin(struct node **p){
     struct node *temp;
     int a;
     scanf("%d",&a);
     temp=malloc(sizeof(struct node));
     temp->data=a;
     temp->next=*p;
     *p=temp;
     }
     
void insert_loc(struct node *p,int loc){
     struct node *temp;
     struct node *save;
     int a;
     int x;
     int b=0;
     save=p;
     while(p!=NULL){
                             b+=1;
                             p=p->next;
                             }
     if(loc<1||loc>b){
                      printf("location not available\n");
                      exit(1);
                      }else{
                            scanf("%d",&x);
                            for(a=1;a<loc-1;a++)
                            save=save->next;
                            temp=malloc(sizeof(struct node));
                            temp->data=x;
                            temp->next=save->next;
                            save->next=temp;
                            }
                            }
                    
void add_last(struct node **p){
     struct node *temp;
     struct node *save;
     int a;
     save=*p;
     while(save->next!=NULL){
                             save=save->next;
                             }
                             scanf("%d",&a);
                             temp=malloc(sizeof(struct node));
                             temp->data=a;
                             temp->next=NULL;
                             save->next=temp;
                             }
                             
void delete_begin(struct node **p){
     struct node *temp;
     temp=*p;
     if(*p==NULL){
                  return;
                  }else{
                        *p=temp->next;
                        free(temp);
                        }
                        }
                  
void delete_last(struct node **p){
     struct node *save,*temp;
     save=*p;
     while(save->next!=NULL){
                             temp=save;
                             save=save->next;
                             }
                            
                             temp->next=NULL;
                             free(save);
                             }
                             
void delete_loc(struct node *p, int loc){
     struct node *save,*temp;
     int a,b=0,x;
     save=p;
     while(p!=NULL){
                             b+=1;
                             p=p->next;
                             }
     if(loc<1||loc>b){
                      printf("location not available\n");
                      exit(1);
                      }else{
                            for(x=1;x<loc;x++){
                                               temp=save;
                                               save=save->next;
                                               }
                                               temp->next=save->next;
                                               free(save);
                                               }
                                               }
                                               
     
void display(struct node *s){
     while(s!=NULL){
                          printf("%d -> ",s->data);
                          s=s->next;
                          }
                          printf("NULL\n");
                          }
                          
int main(){
    struct node *start;
    start=NULL;
    int a,b,c,d,i,x;
    scanf("%d",&b);
    for(i=0;i<b;i++){
                   scanf("%d",&c);
                   add(&start,c);
                   }
                    display(start);
                   add_begin(&start);
                    display(start);
                   scanf("%d",&d);
                   insert_loc(start,d);
                    display(start);
                   add_last(&start);
                    display(start);
                   delete_begin(&start);
                    display(start);
                   delete_last(&start);
                    display(start);
                   scanf("%d",&x);
                   delete_loc(start,x);
                    display(start);
                   display(start);
                   getch();
                   }
    
