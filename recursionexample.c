#include <stdio.h>
int fact(int x);
int main()
{
    int x, factorial;
    printf("Enter the number: ");
    scanf("%d",&x);
    factorial = fact(x);
    printf("The factorial of %d is %d", x,factorial);
    return 0;
}

int fact(int x)
{
    //to see the function calling function recursion
    //printf("Calling Function %d: \n", x);
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else{
      return x * fact(x - 1);
        }
}