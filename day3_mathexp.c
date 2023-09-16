#include<stdio.h>
int main()
{
    int a,b,term, sum=0,sub,mul,div;
    printf("Enter the Values: ");
    scanf("%d", &term);
    switch(term)
    {
        case 1:
        printf("enter the two numbers: ");
        scanf("%d %d",&a,&b);
        sum=a+b;
        printf("sum of and b is %d",sum);
        break;

        case 2:
        printf("enter the two numbers: ");
        scanf("%d %d",&a,&b);
        sub=a-b;
        printf("sum of and b is %d",sub);
        break;

        case 3:
        printf("enter the two numbers: ");
        scanf("%d %d",&a,&b);
        mul=a*b;
        printf("multiply of and b is %d",mul);
        break;

        case 4:
        printf("enter the two numbers: ");
        scanf("%d %d",&a,&b);
        div=a/b;
        printf("sum of and b is %d",div);
        break;

        default: 
        printf("no case found");
    }


    return 0;
}