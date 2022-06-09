#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int p;
    printf("no of times it will rotate\n");
    scanf("%d",&p);
    rotate(arr,n,p);
    return 0;
}
void rotate(int arr[],int n,int p){
    while(p-->0){
        int element=arr[n-1];
        for (int i = n-1; i >= 1; i--){
            arr[i]=arr[i-1];
        }
        arr[0]=element;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");    

}