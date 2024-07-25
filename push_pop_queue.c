#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();
int s[30],front=-1,rear=-1,v,max;

void main()
{
int choice;

printf("How many elements you want to add in queue?=");
scanf("%d",&max);
while(1)
{
printf("\n1.push");
printf("\n2.pop");
printf("\n3.display");
printf("\n4.exit");
printf("\nEnter the Choice=");
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
default:
printf("\nYou have entered the Wrong Choice");
}
}
getch();
}
void push()
{
int v;
if(rear>=max-1)
{
printf("\nQueue is Overflow");
}
else
{
printf("\nEnter the Elements to Insert=");
scanf("%d",&v);
rear=rear+1;
s[rear]=v;
}
if(front==-1)
{
front=0;
}
}
void pop()
{
int v;
if(front==-1)
{
printf("\nQueue is Underflow");
}
else
{
v=s[front];
printf("\nRemoved Elements=%d",v);
}
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front=front+1;
}
}
void display()
{
int i;
if(front==-1)
{
printf("\nQueue is Empty");
}
else
{
printf("Queue = ");
for(i=front;i<=rear;i++)
{
printf("%d\t",s[i]);
}
}
}
