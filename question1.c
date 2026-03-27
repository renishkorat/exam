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