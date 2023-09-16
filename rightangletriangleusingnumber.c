#include<stdio.h>
int main()
{
    int i, j, n,p;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++) //print spaces
        {
            printf(" ");
        }
     
        for(j=1;j<=i;j++) //left half
        {
            printf("*");
        }
        for(j=i-1;j>=1;j--) //right
        {
            printf("*");
        }
      
printf("\n");
    }
    return 0;
}