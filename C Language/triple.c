#include<stdio.h>
#include<conio.h>

void main()
{
    int a;

    printf("Enter the no:");
    scanf("%d",&a);

    if(a>=100 && a<=999)
    {
        printf("It is triple digit.");
    }
    else
    {
        printf("Not a triple digit.");
    }
}