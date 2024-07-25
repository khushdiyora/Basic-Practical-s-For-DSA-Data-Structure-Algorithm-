#include<stdio.h>
void linear_search(int[],int,int);
void main()
{
int k[20],n,x,i;
printf("Enter the value you want in list = ");
scanf("%d",&n);
printf("Enter the number in list = ");
for(i=0;i<n;i++)
{
scanf("%d" , &k[i]);
}
printf("Enter the number to be search in list = ");
scanf("%d",&x);
linear_search(k,n,x);
}
void linear_search(int b[],int k, int p)
{
int i,flag=0;
for(i=0;i<k;i++)
{
if(b[i]==p)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("Search is unsuccessfull");
}
else
{
printf("Search is successfull at loaction %d",i+1);
}
}
