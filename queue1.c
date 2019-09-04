#include<stdio.h>
#define Size 20
void insert(int item,int *r,int q[]);
int delete(int q[],int *f,int *r);
void display(int q[],int r,int f);

void insert(int item,int *r,int q[])
{
if(*r==S-1)
{
printf("queue overflow\n");
return;
}
q[++(*r)]=item;
}

int delete(int q[],int *f,int *r)
{
if(*f>*r)
{
printf("queue underflow\n");
return -99;
}
return q[(*f)++];
}
void display(int q[],int r,int f)
{
int i;
if(f>r)
{
printf("queue is empty\n");
return;
}
printf("contents of queue are :\n");
for(i=f;i<=r;i++)
printf(" %d",q[i]);
printf("\n");
}
int main()
{
int front,rare,item,x,ch,n,nd,qu[S],i;
front=0;
rare=-1;
printf("\n enter 1 to insert\n2 to delete\n3 to display\n-1 to exit \n");
scanf("%d",&ch);
while(ch!=-1)
{
switch(ch)
{
case 1: printf("enter the no.of elements to be inserted \n");
scanf("%d",&n);
printf("enter the elements to be inserted\n");
for(i=0;i<n;i++)
{
scanf("%d",&it);
insert(item,&rare,qu);
}
break;
case 2: printf("enter the no.of elements to be deleted\n");
scanf("%d",&nd);
printf("the deleted elements are\n");
for(i=0;i<nd;i++)
printf("%d\n",delete(qu,&front,&rare));
break;
case 3: display(qu,rare,front);
break;
default: printf("invalid input\n");
}
printf("enter choice or -1 to exit\n");
scanf("%d",&ch);
}
return 0; 
}