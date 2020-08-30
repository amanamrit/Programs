#include<stdio.h>
void main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d",&age);
    if(age>=18)
        printf("Your Age is 18+");
    else
        printf("Your age is not 18");
}