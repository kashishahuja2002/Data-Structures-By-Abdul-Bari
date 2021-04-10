//  Kashish Ahuja
//  Program to find missing element/s in a sequence of sorted elements 

#include<stdio.h>
#include<conio.h>

#define max 10

void main()
{
    int A[max], n;
    printf("\nEnter number of elements in array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++)
        scanf("%d",&A[i]);

    //  missing element             O(n)
    int diff=A[0];
    for(int i=1; i<n; i++)
    {
        if(A[i]-i!=diff)
        {
            int d=A[i]-i-diff;
            for(int j=0; j<d; j++)
            {
                printf("\nMissing element is %d ",i+diff);
                diff++;
            }
        }
    }

    getch();
}