#include <stdio.h>

void quicksort(int array[], int LB, int UB) 
{
    if (LB < UB) 
    {
        int i = LB;
        int j = UB;
        int pivot = array[LB];

        while (i < j) 
        {
            while (array[i] <= pivot && i <= UB)
                i++;
            while (array[j] > pivot)
                j--;

            if (i < j) 
            {
           
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }

        int temp = array[LB];
        array[LB] = array[j];
        array[j] = temp;

        quicksort(array, LB, j - 1);
        quicksort(array, j + 1, UB);
    }
}

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    quicksort(array, 0, n - 1);

    printf("---------: Sorted array :----------\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d\t", array[i]);
        printf("\n");
       
    }

    return 0;
}

