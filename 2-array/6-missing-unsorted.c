//  Kashish Ahuja
//  Program to find missing element/s in a sequence of unsorted elements 

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

    //  missing element             O(n)
    int min=A[0], max=0;
    for(int i=0; i<n; i++)
    {
        if(A[i]<min)
            min=A[i];
        if(A[i]>max)
            max=A[i];
    }
    int *C;
    C=(int*)malloc((max+1)*sizeof(int));

    for(int i=0; i<n; i++)
    {
        int idx=A[i];
        C[idx]=1;
    }
    
    for(int i=min; i<=max; i++)
    {
        if(C[i]!=1)
            printf("\nMissing element is %d ",i);
    }

    getch();
}