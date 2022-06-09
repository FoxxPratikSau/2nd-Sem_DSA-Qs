#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t;
    printf("your target element\n");
    scanf("%d",&t);
    printf("position of target element is %d th\n",1+bs(arr,0,n,t));
    //ls(arr,n);
    return 0;
}
int bs(int a[],int start,int end,int x){
    if(start<=end){
        int mid=(end+start)/2;
        if(a[mid]==x) return mid;
        else if(a[mid]>x) return bs(int a,start,mid-1,x);
        else return bs(a,mid+1,end,x);
    }
    else return -1;
}