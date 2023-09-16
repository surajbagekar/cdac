// prime number in given range
#include<stdio.h>
int main()
{
    int i,j,c,a,b;
    printf("Enter the range: ");
    scanf("%d%d",&a, &b); //50 to 100 range
    for(i=a;i<=b;i++)
    {
        c=0;  
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;// c= factors, factor of prime number are only two, factors of non prime number are more than 3 

        }
        if(c==2)// checking condition, if factors=c=2 the number is prime else not prime
        printf("%d\n",i);
    }  
    return 0;
}  
