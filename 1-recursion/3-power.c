//  Kashish Ahuja
//  Program for power function using recursion

#include<stdio.h>
#include<conio.h>

//  takes more number of multiplications
int power(int m, int n)
{
    if(n>0)
        return power(m,n-1)*m;
    else
        return 1; 
}

//  faster as it takes less number of multiplications
int fastpower(int m, int n)
{
    if(n>0)
    {
        if(n%2==0)
            return fastpower(m*m,n/2);
        else
            return m*fastpower(m*m,n/2);
    }
    else
        return 1; 
}

void main()
{
    int m, n;
    printf("\nEnter value of base: ");
    scanf("%d",&m);
    printf("Enter value of exponent: ");
    scanf("%d",&n);
    printf("By power: %d^%d is %d ",m,n,power(m,n));
    printf("\nBy fast power: %d^%d is %d ",m,n,power(m,n));
    getch();
}