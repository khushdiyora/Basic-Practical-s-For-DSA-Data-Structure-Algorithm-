#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void slength();
void scopy();
void sconcate();
void scompare();
void substring();

int main()
{
    int choice;
    while (1)
    {
        printf("\n1.String length");
        printf("\n2.String copy");
        printf("\n3.String concatenate");
        printf("\n4.String compare");
        printf("\n5.Sub String");
        printf("\n6.Exit");
        printf("\nEnter the Choice=");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            slength();
            break;
        case 2:
            scopy();
            break;
        case 3:
            sconcate();
            break;
        case 4:
            scompare();
            break;
        case 5:
            substring();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("\nYou have entered the Wrong Choice");
        }
    }
    return 0;
}

void slength()
{
    int a = 0, i = 0;
    char str[30];
    printf("Enter a string:");
    scanf("%s", str);
    while (str[i] != '\0')
    {
        i++;
        a++;
    }
    printf("\nYour length of string = %d", a);
}

void scopy()
{
    char str1[20], str2[20];
    int i = 0, j = 0;
    printf("Enter string 2: ");
    scanf("%s", str2);
    while (str2[i] != '\0')
    {
        str1[j] = str2[i];
        j++;
        i++;
    }
    str1[i] = '\0';
    printf("\nYour string is: %s", str1);
}

void sconcate()
{
    char str1[20], str2[20], str3[40];
    int i = 0, j = 0, k = 0;
    printf("Enter String 1: ");
    scanf("%s", str1);
    printf("Enter String 2: ");
    scanf("%s", str2);
    while (str1[i] != '\0')
    {
        str3[k] = str1[i];
        k++;
        i++;
    }
    i = 0; // Reset i for str2
    while (str2[i] != '\0')
    {
        str3[k] = str2[i];
        k++;
        i++;
    }
    str3[k] = '\0';
    printf("\nYour String is: %s", str3);
}

void scompare()
{
    char str1[30], str2[30];
    int a, b, flag = 0, i = 0, j = 0;
    printf("Enter the string 1: ");
    scanf("%s", str1);
    printf("Enter the string 2: ");
    scanf("%s", str2);
    a = strlen(str1);
    b = strlen(str2);
    if (a != b)
    {
        flag = 0;
    }
    while (i < a)
    {
        if (str1[i] != str2[j])
        {
            flag = 0;
            break;
        }
        else
        {
            i++;
            j++;
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("Both strings are the same");
    }
    else
    {
        printf("Both strings are different");
    }
}

void substring()
{
    char str1[100], str2[100];
    int i, j, k, found = 0;
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    for (i = 0; str1[i] != '\0'; i++)
    {
        for (j = 0, k = i; str2[j] != '\0' && str1[k] != '\0'; j++, k++)
        {
            if (str1[k] != str2[j])
            {
                break;
            }
        }
        if (str2[j] == '\0')
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("The second string is a substring of the first string.\n");
    }
    else
    {
        printf("The second string is not a substring of the first string.\n");
    }
}

