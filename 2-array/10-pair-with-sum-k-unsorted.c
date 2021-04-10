//  Kashish Ahuja
//  Program to find pair of elements with sum K from unsorted elements

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
    int k;
    printf("Enter the value of sum: ");
    scanf("%d",&k);

    //  pairs                           O(n^2)
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(A[i]+A[j]==k)
                printf("\nPair: %d %d ",A[i],A[j]); 
        }
    }

    //  using hash table                 O(n)
    printf("\n\nUsing hash table:");
    int max=0;
    for(int i=0; i<n; i++)
    {
        if(A[i]>max)
            max=A[i];
    }
    int *C;
    C=(int*)malloc((max+1)*sizeof(int));
    
    for(int i=0; i<n; i++)
    {
        int idx=A[i];
        int d=k-idx;
        if(C[d]==1)
            printf("\nPair: %d %d ",idx,d);
        C[idx]=1;
    }

    getch();
}