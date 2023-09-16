#include <stdio.h>
int main()
{
    int num, i = 1, res;
    printf("Enter the Table Value: ");
    scanf("%d", &num);
table:
    res = num * i;
    printf("%d * %d = %d\n", num, i, res);
    i++;
    while (i <= 10)
        goto table;
}