#include<stdio.h>
void main()
{
    int a,b,tmp;
    printf("Program to Swap Two Numbers\n\nEnter Two Numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    tmp=a;
    a=b;
    b=tmp;
    printf("\nSwapped as \n%d\n%d", a, b);
}