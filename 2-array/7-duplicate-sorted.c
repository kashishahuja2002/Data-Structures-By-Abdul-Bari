//  Kashish Ahuja
//  Program to find duplicate elements and their count from sorted elements 

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

    //  duplicate elements              O(n)
    for(int i=0; i<n; i++)
    {
        if(A[i]==A[i+1])
        {
            int j=i+1;
            while(A[j]==A[i])
                j++;
            printf("\nDuplicate element is %d for %d times",A[i],(j-i));
            i=j-1;
        }
    }

    getch();
}