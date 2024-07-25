#include <stdio.h>

void insertionSort(int a[], int n) 
{
    for (int i = 1; i < n; i++) 
    {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) 
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    insertionSort(a, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
