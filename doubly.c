#include<stdlib.h>
#include<stdio.h>

struct node
{
	int data;
 struct node *next;
 struct node *prev;
};
typedef struct node *Node;

Node getnode()
{
 Node p;
 p=(Node) malloc (sizeof(Node));
 if(p!=NULL)
 return p;
 else
 {
 printf("Memory is not allocated\n");
 exit(0);
 }
}
Node insert_left(Node head,int item)
{
 Node p;
 p=getnode();
 p->data=item;
 p->next=NULL;
 p->prev=NULL;
 if (head==NULL)
 return p;
 else
 {
  p->next=head;
  head->prev=p;
  head=p;
  return head;
 }
}
Node delete(Node head,int val)
{
 int value=val;
 Node p,q,voi;
 p=head;
 q=NULL;
  while(p->next!=NULL&& p->data!=value)
  {
   q=p;
   p=p->next;
   
   }
   if(p->data==value)
   {if (p==head)
    {p=p->next;
     head=p;
     }
     else
     {
     
    voi=p->next;
    voi->prev=q;
    q->next=voi;
    free(p);
    }
    }
    else
    {
     printf("value not found\n");
     }
     return head;
    }
   void display(Node head)
{
	Node p;
 if(head==NULL)
 {
 printf("list is empty\n");
 }
 else
 {
 p=head;
 printf("Elements in the list: ");
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
 printf("\n");
 }
} 
int main()
{
 Node head=NULL;
 int ch,value,pos;
 while(1)
	{
	printf("1.Insert \n");
	printf("2.delete\n");
	printf("3.display\n");
	printf("4.Exit\n");
	scanf("%d",&ch);
 switch(ch)
 {
 case 1: printf("Enter the element to be inserted: ");
 scanf("%d",&value);
 head=insert_left(head,value);
 break;
 case 2: printf("enter the value to be deleted: ");
 scanf("%d",&value);
 head=delete(head,value);
 break;
 case 3: display(head);
 break;
 case 4: exit(0);
 default: printf("Invalid choice\n");
 }
 }
 
 }
     
       

