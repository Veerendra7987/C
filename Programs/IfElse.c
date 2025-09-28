#include<stdio.h>
void main()
{
    int fp;
    printf("Enter freezing point : ");
    scanf("%d",&fp);

    if(fp>=0)
        printf("Above freezig point ");
    else
        printf("Below freezing point");
}

