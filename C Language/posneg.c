#include<stdio.h>
#include<conio.h>

void main()
{
    int x;
    printf("Enter The value: ");
    scanf("%d",&x);

    if(x>0)
    {
        printf("It is +ve.");
    }
    else if(x<0)
    {
        printf("It is -ve.");
    }
}