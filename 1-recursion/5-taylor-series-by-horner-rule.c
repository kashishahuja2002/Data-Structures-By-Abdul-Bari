//  Kashish Ahuja
//  Program for taylor's series by Horner's rule using recursion

#include<stdio.h>
#include<conio.h>

//  using static variable in recursion
double taylor(int x, int n)
{
    static double ele;
    if(n>0)
    {
        ele =1+ (x*ele)/n;
        return taylor(x,n-1);
    }
    else
        return ele;
}    

void main()
{
    int x, n;
    printf("\nEnter value of x: ");
    scanf("%d",&x);
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("\nBy Horner's rule: Sum of tylor series for %d upto %d terms is %lf ",x,n,taylor(x,n));
    getch();
}