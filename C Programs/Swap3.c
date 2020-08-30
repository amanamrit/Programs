#include<stdio.h>
void main()
{
    int a,b;
    printf("Program to Swap Two Numbers\n\nEnter Two Numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\nSwapped as \n%d\n%d",a,b);
}