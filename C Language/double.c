#include<stdio.h>
#include<conio.h>

void main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);

    if(x>=10 && x<=99)
    {
        printf("It is double digit.",x);
    }
    else
    {
        printf("It is not double digit.",x);
    }
}