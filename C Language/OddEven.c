#include<stdio.h>
#include<conio.h>

void main()
{
    int n;

    printf("Enter the Number:");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("It is even number.",n);
    }
    else
    {
        printf("It is Odd number.",n);
    }
}