//  Kashish Ahuja
//  Program for set operations on array

#include<stdio.h>
#include<conio.h>
#include<malloc.h>

#define max 10

void main()
{
    int A[max], n;
    printf("\nEnter number of elements in array A: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++)
        scanf("%d",&A[i]);

    int B[max], m;
    printf("\nEnter number of elements in array B: ");
    scanf("%d",&m);
    printf("Enter elements of array: ");
    for(int i=0; i<m; i++)
        scanf("%d",&B[i]);

    int sz=m+n;
    int *C;
    C=(int *)malloc(sz*sizeof(int));

    //  union
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(A[i]<B[j])
        {
            C[k]=A[i];
            k++; i++;
        }
        else if(A[i]==B[j])
        {
            C[k]=B[j];
            k++; j++; i++;
        }
        else
        {
            C[k]=B[j];
            k++; j++;
        }
    }

    for(; i<n; i++,k++)
        C[k]=A[i];
    
    for(; j<m; j++,k++)
        C[k]=B[j];

    printf("\nUnion array: ");
    for(int i=0; i<k; i++)
        printf("%d ",C[i]);

    //  intersection
    i=0; j=0; k=0;
    while(i<n && j<m)
    {
        if(A[i]<B[j])
            i++;
        else if(B[j]<A[i])
            j++;
        else
        {
            C[k]= A[i];
            k++; i++; j++;
        }
    }

    printf("\nIntersection array: ");
    for(int i=0; i<k; i++)
        printf("%d ",C[i]);

    //  difference
    i=0; j=0; k=0;
    while(i<n && j<m)
    {
        if(A[i]<B[j])
        {
            C[k]= A[i];
            i++; k++;
        }
        else if(B[j]<A[i])
            j++;
        else
            k++; i++; j++;
    }

    printf("\nDifference array: ");
    for(int i=0; i<k; i++)
        printf("%d ",C[i]);
    
    getch();
}