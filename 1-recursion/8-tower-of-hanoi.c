//  Kashish Ahuja  
//  Program for tower of Hanoi using recursion

#include<stdio.h>
#include<conio.h>

/********************************
TOH(1,A, ,C)
    Move disc from A to C

TOH(2,A, ,C)
    TOH(1,A, ,B)
    Move last disc from A to C
    TOH(1,B, ,C)

TOH(3,A, ,C)
    TOH(2,A, ,B)
    Move last disc from A to C
    TOH(2,B, ,C)

TOH(n,A, ,C)
    TOH(n-1,A, ,B)
    Move last disc from A to C
    TOH(n-1,B, ,C)
********************************/

void TOH(int n, char A, char B, char C)
{
    if(n>0)
    {
        TOH(n-1,A,C,B);
        printf("\nMove from %c to %c",A,C);
        TOH(n-1,B,A,C);
    }
}

void main()
{
    int n;
    char A='A', B='B', C='C';
    printf("\nEnter number of disc: ");
    scanf("%d",&n);
    TOH(n,A,B,C);
    getch();
}
