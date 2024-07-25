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
for (int j = 0; j < 2; j++) 
  {
     int sum = 0;
     for (int i = 0; i < 2; i++) 
        {
            sum += array[i][j];
        }
        printf("The sum of column %d is: %d\n", j, sum);
  }
return 0;
}
