#include<stdio.h>
int change(int x);
int main()
{

int b=50,a;
printf("The value of b before change is %d\n",b);
a= change(b); //no change
printf("The value of b after change is %d\n",b);
return 0;
}

int change(int a)
{
    int b;
    b=75;
return a;
}