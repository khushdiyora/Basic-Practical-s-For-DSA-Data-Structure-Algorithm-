#include <stdio.h>

void swap(int *x, int *y) 
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int a[], int n) 
{
   int i, j, min;

   for (i = 0; i < n-1; i++) 
   {
       min = i;
       for (j = i+1; j < n; j++)
         if (a[j] < a[min])
            min = j;

       swap(&a[min], &a[i]);
   }
}

void printArray(int ar[], int size) 
{
   int i;
   for (i=0; i < size; i++)
       printf("%d ", ar[i]);
   printf("\n");
}

int main() 
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int ar[n];  
    printf("Enter the %d number : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    selectionSort(ar, n);
    printf("Sorted array: \n");
    printArray(ar, n);
    return 0;
}
