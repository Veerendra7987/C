#include<stdio.h>
void main()
{
    int age;
    printf("\n Enter the age ");
    scanf("%d",&age);
    if(age>5)
    {
        if(age>17)
        {
            if(age>19)
            {
                if(age<=65)
                    printf("\n plese pay Rs. 100");
                else
                    printf("\n Invalid age");
            }
            else
                printf("\n plese pay Rs. 200");
        }
        else
            printf("\n plese pay Rs. 150");

    }
    else
        printf("\n your ticket is free ");

}
