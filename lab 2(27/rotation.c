#include <stdlib.h>
#include<stdio.h>
void print_array(int arr[], int n);
void Right_Kth_Rotation(int arr[], int n, int k);
void Left_Kth_Rotation(int arr[], int n, int k);

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
    printf("Enter the number of shifts:");
    scanf("%d", &k);
    printf("original array is\n");
    print_array(a, n);
    printf("Press 1 for Right Shift\nPress 2 for Left Shift\n");
    int input;
    scanf("%d",&input);
    switch (input)
    {
    case 1:
        printf("\nRight Shift by %d times",k);
        Right_Kth_Rotation(a, n, k);
        print_array(a, n);
        break;
    case 2:
        printf("\nLeft Shift by %d times",k);
        Left_Kth_Rotation(a, n, k); 
        print_array(a, n);
        break;
    default:
        break;
    }
    
    return 0;

}


void print_array(int arr[], int n){
    printf("\n");
    for(int i=0;i<(n);i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void Right_Kth_Rotation(int arr[], int n, int k){
    for(int i=1; i<=k; i++){
        int temp=arr[n-1];
        for(int j=n-2; j>=0; j--){
            arr[j+1]=arr[j];
        }
        arr[0]=temp;
    }
}

void Left_Kth_Rotation(int arr[], int n, int k){
    for(int i=1; i<=k; i++){
        int temp=arr[0];
        for(int j=1; j<n; j++){
            arr[j-1]=arr[j];
        }
        arr[n-1]=temp;
    }
}