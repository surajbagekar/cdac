#include<stdio.h>
int sum(int a ,int a);
int main()
{
int c,a,b;
printf("Enter the values of a and b: ");
scanf("%d%d",&a,&b);
c=sum(a,b);
printf("The value of sum C = %d", c);
return 0;
}
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
