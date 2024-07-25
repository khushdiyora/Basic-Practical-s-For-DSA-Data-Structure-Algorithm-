#include <stdio.h>
#include <stdlib.h> 

int fact(int);
int fibo(int);
int gcd(int, int);

int main()
{
    int choice;
    while (1)
    {
        printf("\n\n Press 1. For Find Factorial of any number ");
        printf("\nPress 2. For Find Fibonacci series number ");
        printf("\nPress 3. For Find GCD of number ");
        printf("\nPress 4. For Exit");
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            int n, a;
            printf("\n Enter the value of n:");
            scanf("%d", &n);
            a = fact(n);
            printf("\n the factorial value of n: %d", a);
            break;
        case 2:
            int no, i = 0;
            printf("Enter the number:");
            scanf("%d", &no);
            while (i < no)
            {
                printf("%d\t", fibo(i));
                i++;
            }
            break;
        case 3:
            int m, divisior;
            printf("Enter The Two Numbers:");
            scanf("%d%d", &n, &m);
            divisior = gcd(n, m); 
            printf("GCD of %d and %d is %d", n, m, divisior);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n You entered wrong choice");
        }
    }
    return 0; 
}

int fact(int x)
{
    int f = 1;
    if (x == 1)
        return (f);
    else
        f = x * fact(x - 1);
    return (f);
}

int fibo(int n)
{
    if (n == 0)
        return (0); 
    else if (n == 1)
        return (1);
    else
        return (fibo(n - 1) + fibo(n - 2));
}

int gcd(int m, int n)
{
    if (m <= n && n % m == 0)
        return m;
    else if (n < m)
        return gcd(n, m);
    else
        return gcd(n, n % m);
}

