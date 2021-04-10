//  Kashish Ahuja
//  Program for finding factorial of a number using recursion

#include<stdio.h>
#include<conio.h>

int fact(int n)
{
    if(n>0)
        return fact(n-1)*n;
    else
        return 1; 
}

void main()
{
    int n;
    printf("\nEnter value of n: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d ",n,fact(n));
    getch();
}