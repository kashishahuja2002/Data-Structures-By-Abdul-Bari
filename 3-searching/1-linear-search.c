//  Kashish Ahuja
//  Program for linear search

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
    printf("Enter key element: ");
    int key; 
    scanf("%d",&key);

    int flag=0;
    for(int i=0; i<n; i++)
    {
        if(key==A[i])
        {
            printf("\nKey element %d found at index %d",key,i);
            flag=1;
        }
    }
    if(flag==0)
        printf("\nKey element %d not found in array",key);

    getch();
}