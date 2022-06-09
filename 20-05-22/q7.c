#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("kth min\n");
    scanf("%d",&k);
    min(arr,k,n);
    //insertionsort(arr,n);
    return 0;
}

void min(int arr[],int k,int n){
    //qsort(arr,n,sizeof(int),cmp);
    insertionsort(arr,n);
    printf("%d",arr[k-1]);
}
// qsort(arr,n,sizeof(int),cmp)
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
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",a[i]);
    // }
    
    
}