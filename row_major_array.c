#include <stdio.h>
int main() 
{

int array[2][2];
printf("Enter the values for the 2x2 matrix:\n");
for (int i = 0; i < 2; i++) 
{
  for (int j = 0; j < 2; j++) 
    {
       scanf("%d", &array[i][j]);
    }
}
for (int i = 0; i < 2; i++) 
  {
     int sum = 0;
     for (int j = 0; j < 2; j++) 
        {
            sum += array[i][j];
        }
        printf("The sum of row %d is: %d\n", i, sum);
  }
return 0;
}
