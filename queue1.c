#include<stdio.h>
#include<stdlib.h>

#define size 5
void insert(int *,int *);
void delete(int *,int *,int *);
void display(int *,int *,int *);

int main()
{
int r=-1,f=0,q[size],ch,item;
while(1)
{
printf("Enter 1:to insert\n2:to delete\n3:to display\n4: exit");
scanf("%d",&ch);
switch(ch)
{
case 1:insert(q,*r);
	break;
case 2:delete(q,*f,*r);
	break;
case 3:display(q,*f,*r);
	break;
case 4:exit(0);
	break;
default:printf("wrong choice");
	break;
}
}

return 0;
}


void insert(int q[],int *r)
{       
int item;

	if(*r==size-1)
	{
	printf("Queue is overflow");
	}
	else
	{
	printf("enter the value\n");
	scanf("%d",&item);
	*r=*r+1;
	q[*r]=item;
	}

}
void delete(int q[],int *f,int *r)
{
if(*f>*r)
{
printf("queue is underflow\n");
}
else
{
printf("The element deleted is %d",q[*f]);
*f=*f+1;
}
}
void display(int q[],int *f,int *r)
{
	int i;
	if(*f>*r)
	{
	printf("Queue is Empty");
	}
	else
	{
	for(i=*f;i<=*r;i++)
	{
	printf("%d",q[i]);
	}
	}
}

