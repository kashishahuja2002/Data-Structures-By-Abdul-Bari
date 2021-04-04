//  Kashish Ahuja
//  Program for finding sum of first n natural numbers using recursion

#include<stdio.h>
#include<conio.h>

int sum(int n)
{
    if(n>0)
        return sum(n-1)+n;
    else
        return 0; 
}

void main()
{
    int n;
    printf("\nEnter value of n: ");
    scanf("%d",&n);
    printf("Sum of first %d natural numbers is %d ",n,sum(n));
    getch();
}