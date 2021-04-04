//  Kashish Ahuja
//  Program for fibonacci series using recursion

#include<stdio.h>
#include<conio.h>

int a=1, b=2;
void fib(int n)
{
    if(n>2)
    {
        int c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        fib(n-1);
    }
}

void main()
{
    int n;
    printf("Enter number of terms for fibonacci series: ");
    scanf("%d",&n);
    printf("Fibonacci series: %d %d ",a,b);
    fib(n);
    getch();
}