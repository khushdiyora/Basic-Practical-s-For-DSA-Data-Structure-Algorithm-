#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void reverse(char[],char[]);

void main()

{

char str1[15],str2[15];

printf("enter original string");

gets(str1);



reverse (str1,str2);

printf("reverse string");

puts(str2);

}
void reverse(char *s1,char *s2)

{

int i;

i=strlen(s1);

i=i-1;

while(*s1 != '\0')

{

s1++;

}

while( i >=0 )

{

*s2=*s1;

s1--;

s2++;

i--;

}

*s2='\0';

}
