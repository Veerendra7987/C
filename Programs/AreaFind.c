#include<stdio.h>
void main()
{
    int length,breadth,total,area;
    printf("\nEnter length of the work ",length);
    scanf("%d",&length);
    printf("\nEnter breadth of the work ",breadth);
    scanf("%d",&breadth);
    area = length*breadth;
    printf("\nTotal Area %d",area);
    total = area*20;
    printf("\nTotal wages to be paid : Rs %d",total);


}
