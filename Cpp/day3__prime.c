// prime number in given range
#include<stdio.h>
int main()
{
    int i, j,c,a,b;
    printf("Enter the range: ");
    scanf("%d%d",&a, &b);
    for(i=a;i<=b;i++)
    {
        c=0;  
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;

        }
        if(c==2)
        printf("%d\n",i);
    }  
    return 0;
}  
