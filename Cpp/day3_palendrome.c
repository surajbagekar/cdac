#include<stdio.h>
int main()
{
    int num,temp, sum=0, res;
    printf("Enter the Values: ");
    scanf("%d ",&num);
    int q=num;
    
    while(q!=0)
    {

        res=q%10;
        sum=sum*10+res;
        q=q/10;
    }
    if(num==sum)
    {
        printf("number is palindrome");
        }
    else
    {
        printf("number is not palindrome");
        }
    return 0;
}