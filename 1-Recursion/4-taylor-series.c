//  Kashish Ahuja
//  Program for taylor series using recuursion

#include<stdio.h>
#include<conio.h>

int tylor(int n)
{
    if(n>0)
        return tylor(n-1)*n;
    else
        return 1; 
}

void main()
{
    int n;
    printf("\nEnter value of n: ");
    scanf("%d",&n);
    printf("tylororial of %d is %d ",n,tylor(n));
    getch();
}