#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();

int s[30],top=-1,n,i;

void main()
{
          int choice;
                    printf("How many elements you want to add in stack ? =");
                    scanf("%d",&n);
while(1)
{
          printf("\n 1.push");
          printf("\n 2.pop");
          printf("\n 3.display");
          printf("\n 4.exit");
          printf("\n Enter your choice:");
          scanf("%d",&choice);
switch(choice)
{
          case 1:push();
                    break;
          case 2:pop();
                    break;
          case 3:display();
                    break;
          case 4:exit(0);
                    break;
          defult:
                    printf("\n You entered wrong choice");
}
}
}
void push()
{
          int v;
          if(top>=n-1)
{
          printf("\n stack is overflow");
}
          else
{
          printf("\n Enter insert element:");
          scanf("%d",&v);
          top=top+1;
          s[top]=v;
}
}
void pop()
{
          int x;
if(top==-1)
{
          printf("\n stack is empty");
}
else
{
          x=s[top];
          printf("\n pop value enter:%d",x);
          top=top-1;
}
}
void display()
{
          int i;
          if(top==-1)
{
          printf("\n Stack is empty");
}
else
{
          printf("---------: Values In Stack Is :---------");
                    for(i=top;i>=0;i--)
                    {
                              printf("\n %d",s[i]);
                    }
}
}
