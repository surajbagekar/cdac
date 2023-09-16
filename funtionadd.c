#include<stdio.h>
void add(int, int);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    add(a,b);
}
void add( int x, int y)
{
printf("addition=%d",x+y);

}