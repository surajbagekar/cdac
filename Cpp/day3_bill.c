#include <stdio.h>
int main()
{
    int vanila = 100, mango = 120, pista = 150, n, qty_van = 0, qty_man = 0, qty_pis = 0, tv, tm, tp, ta;


        printf("Enter the Quantity of Vanila Icecream:");
        scanf("%d", &qty_van);

        printf("Enter the Quantity of Mango Icecream:");
        scanf("%d", &qty_man);

        printf("Enter the Quantity of Pista Icecream:");
        scanf("%d", &qty_pis);

        ta = vanila * qty_van + mango * qty_man + pista * qty_pis;
        printf("Total amount is: %d", ta);

}