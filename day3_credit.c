// The Policy followed by a company to process
// customer orders
// Is given by the following rules:
// ( a )If a customer order is less than or equal to that in stock
// and has credit is OK,supply has requirement.
// ( b ) If has credit is not OK do not supply.Send him
// intimation.
// ( c ) If has credit is OK but the item in stock is less than has
// order ,supply what is in stock.Intimate to him data the
// balance will be shipped.

#include <stdio.h>
int main()
{
    int cust_order=0, stock_available = 1000, order_price = 20000, cust_payment=0;
    printf("Enter the customer requirement i.e order and payment details:");
    scanf("cust_order=%d, cust_payment=%d", &cust_order, &cust_payment);
    (cust_order <= stock_available) && (cust_payment == order_price)=
    {
        printf("Supply has requirement");
    }
    else
    {
        printf("Supply has not requirement");
    }
    return 0;
}