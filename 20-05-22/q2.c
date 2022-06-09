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
    int element;
    printf("Enter element\n");
    scanf("%d",&element);
    int input;
    printf("enter input\n");
    scanf("%d",&input);
    
    switch (input)
    {
    case 1:
        /* code */
        insertatfirst(arr,element,n);
        break;
    case 2:
        /* code */
        insertatlast(arr,element,n);
        break;
    case 3:
        /* code */
        
        printf("enter p\n");
        scanf("%d",&p);
        insertatp(arr,element,p,n);
        break;           
    
    default:
        break;
    }

    // insertatfirst(arr,element,n);
    // insertatlast(arr,element,n);
    return 0;
}

void insertatfirst(int arr[],int element,int n){
    if(n>100) printf("error");
    else{
        for (int i = n; i >= 1; i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=element;
        
        
    }
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
void insertatlast(int arr[], int element,int n){
    if(n>100) printf("error");
    else{
        arr[n]=element;
    }
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insertatp(int arr[], int element, int p, int n){
    if(n>100) printf("error");
    else{
        for (int i = n; i > p; i--)
        {
            arr[i]=arr[i-1];
        }
        arr[p]=element;
    }
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
}
