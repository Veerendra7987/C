#include<stdio.h>
void main()
{
    int i,num,even=0,odd=0,sum=0;
    for (i=0;i<3;i++)
   {

    printf("Enter the number");
    scanf("%d",&num);
    sum+=num;
    if(num%2==0)
        even++;
    else
        odd++;
   }
   printf("\n odd %d",odd);
      printf("\n Even %d",even);
   printf("\n sum %d",num);

}
