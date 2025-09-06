#include<stdio.h>
void main()
{
    FILE *fb;
    fb=fopen("ashu1","w");
    char ch;
    printf("Enter the char ");
    scanf("%c",&ch);
    fputc(ch,fb);
    printf("file svaed");
    fclose(fb);

}
