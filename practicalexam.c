//question 1
#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    int i, sum;
    float average;

    printf("Enter the marks : ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    sum = a + b + c + d + e;

    average = sum / 5;

    printf("\nAverage Marks = %.2f\n", average);

    if (average >= 90)
        printf("Grade: A+\n");
    else if (average >= 75)
        printf("Grade: A\n");
    else if (average >= 60)
        printf("Grade: B\n");
    else if (average >= 50)
        printf("Grade: C\n");
    else if (average >= 35)
        printf("Grade: D\n");
    else
        printf("Grade: Fail\n");

    return 0;
}

//question 2
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

//question 3
#include <stdio.h>

int printOdd(int arr[], int size)
{
    int i;
    printf("Odd elements in the array are:\n");
    
    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 != 0)  
        {
            printf("%d ", arr[i]);
        }
    }

}

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printOdd(arr, n);

    return 0;
}

// question 4
#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("Even elements is:\n");
    for(i = 0; i < n; i++) {
        if(*(ptr + i) % 2 == 0) {
            printf("%d ", *(ptr + i));
        }
    }

    return 0;
}

//question 5
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 10; i >= 6; i--)
    {
        for (j = 6; j <= i; j++)
        {
            printf("  ");
        }
        for (j = i; j <= 10; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
