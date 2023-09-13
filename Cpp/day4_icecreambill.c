#include <stdio.h>
int main()
{
    int vanila = 100, mango = 120, pista = 150, n, qty_van, qty_man, qty_pis, total;
    // int tv, tm, tp, ta;
    float gst=1.18, ta;
    printf("Enter the Icecream Choice:\n1.Vanila=100 Rs\n2.Mango=120\n3.Pista=150\n4.Variety\n ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter the Vanily Quantity: ");
        scanf("%d", &qty_van);
        total = vanila * qty_van;

        // printf("Total Price of Vanila Icecream: %d ", total);
        break;

    case 2:
        printf("Enter the Mango Quantity: ");
        scanf("%d", &qty_man);                                                                                                                                                               
        
        total = mango * qty_man;

        // printf("Total Price of tp Icecream: %d ", total);
        break;

    case 3:
        printf("Enter the Pista Quantity: ");
        scanf("%d", &qty_pis);
        total = pista * qty_pis;

        // printf("Total Price of Pista Icecream: %d ", total);
        break;

    case 4:
        printf("Enter the Quantity of Vanila Icecream:");
        scanf("%d", &qty_van);
        
        printf("Enter the Quantity of Mango Icecream:");
        scanf("%d", &qty_man);
        
        printf("Enter the Quantity of Pista Icecream:");
        scanf("%d", &qty_pis);
        
        total = vanila * qty_van + mango * qty_man + pista * qty_pis;
        // printf("Total amount is: %d", total);
        break;
    }

    ta=total*gst;
    printf("total value = %.2f",ta);
}

