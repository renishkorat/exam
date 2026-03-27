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