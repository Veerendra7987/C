#include<stdio.h>
void main()
{
    int m1,m2,m3,total;

    printf("\nEnter the mark hindi : ");
    scanf("%d",&m1);
    printf("\nEnter the mark English : ");
    scanf("%d",&m2);
    printf("\nEnter the mark history : ");
    scanf("%d",&m3);
    total=m1+m2+m3;
    int avg = total/3;
    printf("\nHindi %d",m1);
    printf("\nEnglish %d",m2);
    printf("\nHistory %d",m3);
    printf("\nTotal marks = %d",total);
    printf("\nAverage %d",avg);


}
