#include<stdio.h>
int F(char symbol)
{
switch(symbol)
{
case'+':
case'-':return 2;
case'*':
case'/':return 4;
case'^':
case'$':return 5;
case'(':return 0;
case'#':return -1;
default: return 8;
}
}
int G(char symbol)
{
switch(symbol)
{
case'+':
case'-':return 1;
case'*':
case'/':return 3;
case'^':
case'$':return 6;
case'(':return 9;
case')':return 0;
default:return 7;
}
}
void infix_postfix(char infix[],char postfix[])
{
int top i,j;
char c[30],symbol;
top=-1;
c[++top]='#';
j=0;
for(i=0;i<str len(infix);i++)
{
symbol=infix[i]
while(F(c[top])>G(symbol))
{
postfix[j]=c[top--];
j++;
}
if(F(c[top])!=G(symbol))
c[++top]=symbol
else
top--;
}
while(c[top]!='#')
{
postfix[j++]=s[top--];
}
postfix[j]='\0';
}
void main()
{
char infix[30];
char postfix[20];
printf("enter the valid expression");
scanf("%s",infix);
infix_postfix(infix,postfix);
printf("the postfix expression is\n");
printf("%s",postfix);
}
