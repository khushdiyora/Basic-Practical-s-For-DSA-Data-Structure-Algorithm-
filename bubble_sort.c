#include<stdio.h>
void sort(int[],int);
void main()
{
int s[30],n;
printf("\nHow many number you want to enter: ");
scanf("%d",&n);
printf("Enter the elements in the array: ");
for(int i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
sort(s,n);
}
void sort(int a[],int k)
{
for(int i=0;i<k;i++)
{
for(int j=i+1;j<k;j++)
{
if(a[i]>a[j])
{
int temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("\nSorted Array is: ");
for(int i=0;i<k;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
}	  
