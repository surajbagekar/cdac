#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};
    int result, i, n;

    printf("Enter the array's position: ");
    scanf("%d %d", &i &n);

    result = a[i] + b[n];
    printf("%d", result);

    return 0;
}

