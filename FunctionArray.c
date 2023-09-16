#include <stdio.h>
void prime(int n);
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    prime(n); 

}
void prime(int n)
{
    int c = 0, i;
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
        if (c == 1)
        {
            printf("The number is Prime");  
        }
        else
        {
            printf("Number is not prime");
        }
       
}