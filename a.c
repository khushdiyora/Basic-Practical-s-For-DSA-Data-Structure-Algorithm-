#include <stdio.h>
#include <string.h>
int slength(char *str)
{
	int i=0,len=0;
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	return len;
}
void scopy(char *str1,char *str2)
{
	int i=0;
	while(str2[i]!='\0')
	{
		str1[i]=str2[i];
		i++;
	}
	str1[i]='\0';
}
void sconcate(char *str1,char *str2,char *str3)
{
	int i=0,j=0,k=0;
	while(str1[i]!='\0')
	{
		str3[k]=str1[i];
		i++;
		k++;
	}
	while(str2[j]!='\0')
	{
		str3[k]=str2[j];
		j++;
		k++;
	}
	str3[k]='\0';
}
void scompare()
{
	char str1[30],str2[30];
	int a,b,flag=0,i=0,j=0;
	printf("Enter the string 1:");
	fgets( str1, sizeof str1, stdin );
	gets(str1);
	printf("Enter the string 2:");
	fgets( str2, sizeof str2, stdin );
	//gets(str2);	
	a=strlen(str1);
	b=strlen(str2);
	if(a!=b)
	{
		//printf("Both string are different");
	    flag=0;
	}
	while(i<a)
	{
	if(str1[i]!=str2[j])
	{
		flag=0;
	    //printf("Both string are different");
		break;
	}
	else
	{
		i++;
		j++;
		flag=1;
	}
	}
	if(flag==1)
	{
		printf("Both string are same");
	}
	else
	{
		printf("Both string are different");
	}
}
int main()
{
	scompare();
	return 0;
}
