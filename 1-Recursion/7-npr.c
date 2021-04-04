//  Kashish Ahuja
//  Program for permutation of objects (selection of r objects from n objects) using recursion

#include<stdio.h>
#include<conio.h>

int NPR(int n, int r)
{
    if(r==0 || r==n)
        return 1;
    else 
        return NPR(n-1,r-1)+NPR(n-1,r);
}

void main()
{
    int n, r;
    printf("\nEnter value of n: ");
    scanf("%d",&n);
    printf("Enter value of r: ");
    scanf("%d",&r);
    printf("%dP%d: %d",n,r,NPR(n,r));
    getch();
}