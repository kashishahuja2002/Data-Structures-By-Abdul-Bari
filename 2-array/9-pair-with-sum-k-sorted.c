//  Kashish Ahuja
//  Program to find pair of elements with sum K from sorted elements

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

    //  pairs                           O(n)
    int i=0, j=n-1;
    
    while(i!=j)
    {
        int sum=A[i]+A[j];
        if(sum==k)
        {
            printf("\nPair: %d %d",A[i],A[j]);
            i++; j--;
        }
        else if(sum<k)
            i++;
        else
            j--;
    }

    getch();
}