//  Kashish Ahuja
//  Program for merging two sorted arrays into third array

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

    //  merging
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(A[i]<B[j])
        {
            C[k]=A[i];
            k++; i++;
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

    printf("\nMerged array: ");
    for(int k=0; k<sz; k++)
        printf("%d ",C[k]);

    getch();
}