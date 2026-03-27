#include <stdio.h>

float findAverage(int arr[][10], int rows, int cols)
{
    int i, j;
    int sum = 0;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    return (float)sum / (rows * cols);
}

int main()
{
    int arr[10][10];
    int rows, cols, i, j;
    float avg;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the array:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    avg = findAverage(arr, rows, cols);

    printf("Average of all elements = %.2f\n", avg);

    return 0;
}