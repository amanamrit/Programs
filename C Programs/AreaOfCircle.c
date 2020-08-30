#include<stdio.h>
#define Pi 3.14
void main()
{
    int r;
    float area;
    printf("Enter the radius ");
    scanf("%d", &r);
    area=Pi*r*r;
    printf("The Area Of The Circle = %f", area);
}