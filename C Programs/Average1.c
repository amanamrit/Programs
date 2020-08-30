#include<stdio.h>
void main()
{
    int a,b,c,d;
    float avg;
    printf("Program to find average of 4 numbers\n");
    printf("\nEnter Numbers one by one\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    avg=(a+b+c+d)/4;
    printf("The average of entered values are = %f",avg);
}