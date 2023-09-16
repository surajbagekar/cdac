#include <stdio.h>
int main() 
{
    int a[3][3],sum=0, i, j;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {  
                scanf("%d",&a[i][j]);
            }
        }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           // if(i+j==1||i+j==3) (0-1 + 1-0,1-2+2-1)
           //if(i+j==0||i+j==2||i+j==4)(0-0,0-2,1-1,2-1,2-2)
           if(i+j==0||i+j==1&&j!=1||i+j==
           )
        {
            sum = sum+a[i][j];
        }
        }
    }
 printf("\nSum of Matrix; %d",sum);  
}
