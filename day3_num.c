//calculate total amount
#include<stdio.h>
int main()
{
int ta, dis=200,pa;
printf("Enter the purchase value of items:");
scanf("%d",&pa);
if(pa>=1500)
{
    ta=pa-dis;
    printf("The total amount is: %d",ta);
}
else{
    printf("The total amount is:%d",pa);
}

}