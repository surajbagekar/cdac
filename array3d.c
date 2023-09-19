#include<stdio.h>
int main()
{
int a[2][2][2],i,j,k,m;
printf("Enter the matrix elements: ");

for(i=0;i<2;i++)
{ 
    for(j=0;j<2;j++)
    {
        for(j=0;j<2;j++)
        {
        scanf("%d",&a[i][j]);
    }
    }
    
    
}
printf("\nmatrix\n");

for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
{
    printf("%d",a[i][j]);
    printf("\t");
}
    printf("\n");
    
 
}

    


}