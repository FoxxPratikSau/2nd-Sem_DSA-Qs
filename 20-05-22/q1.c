#include<stdio.h>
#include<stdlib.h>
int main()
{
    // int n=5;
    // int arr[5]={2,23,96,85,44};
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    forward(arr,n);
    printf("\n");

    reverse(arr,n);
    return 0;
}
void forward(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void reverse(int arr[], int n){
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}