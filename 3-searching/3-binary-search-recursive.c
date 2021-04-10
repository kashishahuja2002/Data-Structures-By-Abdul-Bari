//  Kashish Ahuja
//  Program for binary search using recursive method

#include<stdio.h>
#include<conio.h>

int arr[50];
void binarySearch(int low, int high, int key);

int main() 
{
    printf("Enter size of array: ");
    int n;  scanf("%d",&n);
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched: ");
    int key; scanf("%d",&key);
    
    binarySearch(0,n-1,key);
        
    return 0;
} 

void binarySearch(int low, int high, int key)
{
    if(low<=high) 
    {
        int mid = (low+high)/2;
        if(key==arr[mid]) 
            printf("\nElement %d found at index %d",key,mid);
        else if(key<arr[mid]) 
            binarySearch(low,mid-1,key);
        else 
            binarySearch(mid+1,high,key);
    }
    else
        printf("\nElement %d not found.",key);
}
