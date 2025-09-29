#include<stdio.h>
void main()
{
    char marks;
    printf("Enter the marks : ");
    scanf("%d",&marks);
    if (marks<25)
        printf("\nF");
    else if(marks>=25 && marks<45)
        printf("E");
    else if(marks>=45 && marks<50)
        printf("D");
    else if(marks>=50 && marks<60)
        printf("C");
    else if(marks>=60 && marks<80)
        printf("B");
    else if(marks>=80)
        printf("A");

}
