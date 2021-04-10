//  Kashish Ahuja
//  Program for operations on array ADT

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define max 10
int n, A[max];    //  n is length

int isFull();
int isEmpty();
int inRange(int pos);
void insertAtBegin(int ele);
void insertAtPosition(int pos, int ele);
void insertAtEnd(int ele);
void display();
void deleteFromBegin();
void deleteFromPosition(int pos);
void deleteFromEnd();

void main()
{
    int choice, ele, pos;
    printf("\nEnter number of elements in array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++)
        scanf("%d",&A[i]);

    do
    {
        printf("\n\n1) Insert an element at the beginning\n2) Insert an element at a position\n3) Insert an element at the end\n4) Display\n5) Delete an element from the beginning\n6) Delete an element from a position\n7) Delete an element from the end\n8) Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: if(!isFull())
                    {
                        insertAtBegin(ele);
                    }
                    else
                        printf("\nThe array is full.");
                    break;

            case 2: if(!isFull())
                    {
                        printf("\nEnter position to insert element: ");
                        scanf("%d",&pos);
                        if(inRange(pos))
                        {
                            printf("Enter element to be inserted: ");
                            scanf("%d",&ele);
                            insertAtPosition(pos, ele);
                        }
                        else
                            printf("\nPosition is not in the range of array");
                    }
                    else
                        printf("\nThe array is full.");
                        
                    break;

            case 3: if(!isFull())
                    {
                        printf("\nEnter element to be inserted: ");
                        scanf("%d",&ele);
                        insertAtEnd(ele);
                    }
                    else
                        printf("\nThe array is full.");
                    break;

            case 4: display();
                    break;

            case 5: if(!isEmpty())
                        deleteFromBegin();
                    else
                        printf("\nArray is empty.");
                    break;

            case 6: if(!isEmpty())
                    {
                        printf("\nEnter position to insert element: ");
                        scanf("%d",&pos);
                        if(inRange(pos))
                        {
                            {
                                deleteFromPosition(pos);
                            }
                            
                        }
                        else    
                            printf("\nPosition is not in the range of array");
                    }
                    else    
                            printf("\nArray is empty.");
                    break;

            case 7: if(!isEmpty())
                        deleteFromEnd();
                    else
                        printf("\nArray is empty.");
                    break;
                
            case 8: exit(0);

            default: printf("\nInvalid choice");
        }

    } while (choice!=8);

    getch();
}

int isFull()
{
    if(n==max)
        return 1;
    else    
        return 0;
}

int isEmpty()
{
    if(n==0)
        return 1;
    else 
        return 0;
}

int inRange(int pos)
{
    if(pos>=0 && pos<=n)
        return 1;
    else    
        return 0;
}

void insertAtBegin(int ele)
{
    for(int i=n; i>0; i--)
        A[i]=A[i-1];
    A[0]=ele;
    printf("Element %d is inserted at the beginning", ele);
    n++;
}

void insertAtPosition(int pos, int ele)
{
    for(int i=n; i>(pos-1); i--)
        A[i]=A[i-1];
    A[(pos-1)]=ele;
    printf("Element %d is inserted at position %d", ele, pos);
    n++;
}

void insertAtEnd(int ele)
{
    A[n]=ele;
    printf("Element %d is inserted at the end", ele);
    n++;
}

void display()
{
    printf("\nArray: ");
    for(int i=0; i<n; i++)
        printf("%d ",A[i]);
}

void deleteFromBegin()
{
    printf("\nElement %d is deleted from beginning", A[0]);
    for(int i=0; i<n-1; i++)
        A[i+1]=A[i];
    n--;
}

void deleteFromPosition(int pos)
{
    printf("\nElement %d is deleted from position %d", A[0], pos);
    for(int i=pos-1; i<n-1; i++)
        A[i+1]=A[i];
    n--;
}

void deleteFromEnd()
{
    printf("\nElement %d is deleted from end", A[n-1]);
    n--;
}