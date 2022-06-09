#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int n;
    int p;
    scanf("%d",&n);
    int arr[100];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int input;
    printf("enter input\n");
    scanf("%d",&input);
    switch (input)
    {
    case 1:
        /* code */
        deleteatfirst(arr,n);
        break;
    case 2:
        /* code */
        deleteatend(arr,n);
        break;
    case 3:
        /* code */
        
        printf("enter p\n");
        scanf("%d",&p);
        deleteatp(arr,n,(p-1));
        break;           
    
    default:
        break;
    }
    return 0;
}
void deleteatfirst(int arr[],int n){
    if(n==0) printf("not possible");
    else{
        for (int i = 1; i < n; i++)
        {
            arr[i-1]=arr[i];
        }
        
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
void deleteatend(int arr[],int n){
    if(n==0) printf("not possible");
    else{
        for (int i = n; i < n; i++)
        {
            arr[i-1]=arr[i];
        }
        
    }
     for (int i = 0; i < n-1; i++)
    {
        printf("%d ",arr[i]);
    }
}
void deleteatp(int arr[],int n,int p){
    if(n==0) printf("not possible");
    else{
        for (int i = p+1; i < n; i++)
        {
            arr[i-1]=arr[i];
        }
        
    }
     for (int i = 0; i < n-1; i++)
    {
        printf("%d ",arr[i]);
    }
}