#include <stdio.h>

int main()
{
    /*gcc compiler coverts the code into machine
    instruction, whatever given here goes to gcc compiler
    and if it has some error the gcc shows error in terminal window.
    In case no error gcc covert the
    file into exe file or into machine instruction*/

    // int a = 7;
    // float b = 8.0;
    // char c = 't';
    // //printf("code text %f",b);
    // printf("sizeofunisigned int %d", sizeof(long int));

    // const int n = 7;
    // i= 10;
    // 8421

    int a;
    printf("Enter the Values of a: ");
    scanf("%d", &a);
    // int temp;
    // temp=a;
    // a=b;
    // b=temp;

    // a = a + b; // 1+2=3
    // b = a - b; // 3-2=1
    // a = a - b; // 3-1=2

    while(a<91)
    {
    printf("%d", a); 
    a++;
    }
    return 0;
}