#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter an value: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        fact = fact * i;
    }
    printf("Factorial of %u = %u", n, fact);

return 0;
}
