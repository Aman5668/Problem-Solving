#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    
    printf("Enter the Number:");
    scanf("%d",n);

    if(n>=0 && n<=9)
    {
        printf("Single Digit.");
    }
     printf("Not a single digit.");
}