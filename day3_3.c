#include<stdio.h>
int main()
{
    int pn;
    printf("Enter the the range: ");
    scanf("%d",&pn);
    
    for (int i = 1; i<= pn; i++)
    {
    for (int j = 2; j < pn; j++)
    {
        if(pn%i==0)
        {
            printf("%d",i);
        }
        
    }
    
    printf("%d",pn);
        }
    

    return 0;
}