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
            for(n=2;n<num;)
            {
                printf("Given number is not prime");

            }
            n++;
        }
        else
        {
            printf("Given number is prime");
        }
    } while(n<=i);
    }
}