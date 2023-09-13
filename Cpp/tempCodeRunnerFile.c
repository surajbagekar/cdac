#include <stdio.h>
int main()
{
    int n = 2, i = 1, num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num == 1) 
    
    {
        printf("not prime ");
    }
    else if(num==2)
    {
        printf("prime num");
    }
    else
    {
    do
    {
        if (num % n == 0) //  num=10
        {
            printf("\nGiven number is not prime");
        }
        else
        {
            printf("\nGiven number is prime");
        }
    } while(n<=i);
    }
}