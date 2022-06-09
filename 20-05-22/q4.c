#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
    return 0;
}
void reverse(int arr[],int n){
    int mid=n/2;
    for(int i=0;i<mid;i++){
       // swap(arr[i],arr[n-1-i]);
        int temp;
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}
// int swap(int a, int b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     return a,b;
// }