#include <stdio.h>
#include <math.h>
int main()
{
    int side;
    float area;
    printf("Enter the value of side\n");
    scanf("%d", &side);
    area = pow(side, 2.0);
    printf("The value of area is %f",area);

    return 0;
}