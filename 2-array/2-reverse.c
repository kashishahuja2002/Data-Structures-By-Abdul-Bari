//  Kashish Ahuja
//  Program for reversing elements of array

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

    //  Method 1
    //  using an auxillary array
    int B[max];
    for(int i=0; i<n; i++)
        B[i]=A[n-1-i];
    
    for(int i=0; i<n; i++)
        A[i]=B[i];

    printf("\nReversed array: ");
    for(int i=0; i<n; i++)
        printf("%d ",A[i]);

    //  Method 2
    //  swapping elements
    for(int i=0; i<n/2; i++)
    {
        int temp=A[i];
        A[i]=A[n-1-i];
        A[n-1-i]=temp;
    }

    printf("\nReversed array: ");
    for(int i=0; i<n; i++)
        printf("%d ",A[i]);

    getch();
}