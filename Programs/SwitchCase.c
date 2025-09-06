#include<stdio.h>
void main()
{
    int choice,sum=0,num=0;
    printf("\n1.  Square");
    printf("\n2. Rectangle");
    printf("\n3. Circle");
    printf("\n Enter the choice ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :  printf("Enter the side");
                  scanf("%d",&choice);
                  sum=num*num;
                  printf("Area of Square is %d",sum);
                 break;
        case 2 : printf("\nNetwork os");
                 printf("\nOpen source");
                 break;
        case 3 : printf("\nDesktop os");
                 printf("\nMicrosoft");
                 break;
    }

}