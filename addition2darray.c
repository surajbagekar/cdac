#include <stdio.h>
int main() 
{
    int a[3][3]={1,2,3,4,5,6,7,8,9},sum=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
           {  
            sum=a[0][1]+a[1][0]+a[1][2]+a[2][1];
            }
        }
    printf("sum=%d,sum");
}

