#include<stdio.h>
int factorial(int a);
int main()
{
    int a, fact;
    printf("Enter the any value: ");
    scanf("%d",&a);
    fact=factorial(a);
    printf("%d",fact);
}
int factorial(int a)
{
    int f=1;
    for(int i=1;i<=a;i++)
    f*=i;
    return f;
}

