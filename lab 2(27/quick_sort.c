#include <stdio.h>
#include <stdlib.h>
int Partition(int a[], int start, int end)
{
    int j,i,t;
    int pivot= a[end];
    i=start-1;
    for(j=start; j<end; j++)
    {
        if(a[j]<pivot)
        {
            i=i+1;
            t= a[i]; 
            a[i]= a[j];
            a[j]= t;
        }
    }
    t= a[i+1]; 
    a[i+1]= a[end];
    a[end]= t;
    return i+1;
}

void Quick_Sort(int a[], int start, int end)
{
    if(start<end)
    {
        int p= Partition(a, start, end);
        Quick_Sort(a,start, p-1);
        Quick_Sort(a,p+1,end);
    }
}

void printArray(int a[], int size)
{
    for(int i=0; i<size;i++)
        printf("%d ", a[i]);
        printf("\n");
    return;
}

int main()
{
    int arr[]= {12,1,9,10,15,18,20,3,5,4,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    printf("Original Array:\n");
    printArray(arr,n);
    Quick_Sort(arr,0,n-1);
    printf("Sorted array:\n");
    printArray(arr,n);
    return 0;
}