#include <stdio.h>
int main()
{
    int n, temp, res, count = 0;
    printf("Enter the Values: ");
    scanf("%d ", &n);
    while (n != 0)
    {
        res = n % 10;
        temp = temp * 10 / res;
        n = n / 10;
        count++;
    }
    printf("count=%d", count);

    return 0;
}