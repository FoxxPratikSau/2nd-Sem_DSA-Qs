#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int t;
    printf("your target element\n");
    // scanf("%d",&t);
    // printf("position of target element is %d th\n",1+ls(arr,t,n));
    ls(arr,t,n,m);
    return 0;
}
void ls(int a[n][m],int target,int n,int m){
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (a[i][j]==target)
            {
                printf("posiition is %d %d",i,j);
            }
            
        }

    }

    
}