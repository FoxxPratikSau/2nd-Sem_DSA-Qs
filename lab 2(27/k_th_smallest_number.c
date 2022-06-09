#include <stdio.h>
#include <stdlib.h>
int Kth_Smallest_Element(int arr[],int n,int k);
void insertionsort(int a[],int n);
int main(){
    int n;
    printf("Enter Array Size:");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter array elements:");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    int k;
    printf("Enter the rank of the element you want:");
    scanf("%d", &k); 

    int ans=Kth_Smallest_Element(a, n, k);
    printf("\n%dth Smallest element in the array is %d.",k, ans);
    
    return 0;
    
}
int Kth_Smallest_Element(int arr[],int n,int k){
    insertionsort(arr,n);
    return arr[k-1];
}
void insertionsort(int a[],int n){
    int i,j,key;
    for (int i = 0; i < n; i++)
    {
        /* code */
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key){

            
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}