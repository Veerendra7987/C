#include<stdio.h>
void main()
{
    float price,qty,total;
    printf("\nEnter the product price : ");
    scanf("%f",&price);
    printf("\nEnter the qty of product : ");
    scanf("%f",&qty);
    total=price*qty;
    printf("\nPlease pay Rs.%.2f",total);
}
