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