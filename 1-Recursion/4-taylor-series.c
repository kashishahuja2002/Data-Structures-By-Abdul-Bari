//  Kashish Ahuja
//  Program for taylor's series using recursion

#include<stdio.h>
#include<conio.h>

//  using tree recursion
double power(double m, double n)
{
    if(n>0)
        return power(m,n-1)*m;
    else
        return 1; 
}

double fact(double n)
{
    if(n>0)
        return fact(n-1)*n;
    else
        return 1; 
}

double tylor(int x, int n)
{
    double ele=0;
    if(n>0)
    {
        ele=power(x,n-1) / fact(n-1);
        return ele + tylor(x,n-1);
    }
    else
        return 0; 
}

//  using static variable in recursion
double staticTylor(int x, int n)
{
    static double p=1, f=1;
    double ele=0;
    if(n>0)
    {
        ele = staticTylor(x,n-1);
        p=p*x;
        f=f*n;
        return ele + p/f;
    }
    else
        return 1; 
}

void main()
{
    int x, n;
    printf("\nEnter value of x: ");
    scanf("%d",&x);
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("By tree recursion: Sum of tylor series for %d upto %d terms is %lf ",x,n,tylor(x,n));
    printf("\nBy static variable: Sum of tylor series for %d upto %d terms is %lf ",x,n,staticTylor(x,n));
    getch();
}