//  Kashish Ahuja
//  Program to find duplicate elements and their count from unsorted elements 

#include<stdio.h>
#include<conio.h>
#include<malloc.h>

#define maximum 10

void main()
{
    int A[maximum], n, B[maximum];
    printf("\nEnter number of elements in array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
        B[i]=A[i];
    }

    //  duplicate elements              O(n^2)
    for(int i=0; i<n-1; i++)
    {
        int count=1;
        if(A[i]>=0)
        {
            for(int j=i+1; j<n; j++)
            {
                if(A[i]==A[j])
                {
                    count++;
                    A[j]=-1;
                }
            }
            if(count>1)
                printf("\nDuplicate element is %d for %d times",A[i],count);
        }
    }

    //  using hash table                      O(n)
    printf("\n\nUsing hash table: ");
    int max=0;
    for(int i=0; i<n; i++)
    {
        if(B[i]>max)
            max=B[i];
    }
    int *C;
    C=(int*)malloc((max+1)*sizeof(int));

    for(int i=0; i<=max; i++)
        C[i]=0;
    
    for(int i=0; i<n; i++)
    {
        int idx=B[i];
        C[idx]++;
    }

    for(int i=0; i<=max; i++)
    {
        if(C[i]>1)
            printf("\nDuplicate element is %d for %d times",i,C[i]);
    }
    
    getch();
}