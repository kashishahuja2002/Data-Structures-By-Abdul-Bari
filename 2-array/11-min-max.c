//  Kashish Ahuja
//  Program to find minimum and maximum element in single scan

#include<stdio.h>
#include<conio.h>
#include<malloc.h>

#define maximum 10

void main()
{
    int A[maximum], n;
    printf("\nEnter number of elements in array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++)
        scanf("%d",&A[i]);

    //  Min Max                  O(n)
    int min=A[0];
    int max=A[0];
    for(int i=1; i<n; i++)
    {
        if(A[i]<min)
            min=A[i];
        else if(A[i]>max)
            max=A[i];
    }

    printf("\nMinimum element: %d\nMaximum element: %d",min,max);

    getch();
}