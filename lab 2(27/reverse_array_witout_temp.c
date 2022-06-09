#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int n);
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);

    int a[n];
    printf("Enter the elements of the array:");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    //swaping
    for(int i=0; i<n/2; i++){
        a[i]=a[i]+a[n-i-1];
        a[n-i-1]=a[i]-a[n-i-1];
        a[i]=a[i]-a[n-i-1];
    }

    printf("\nThe reversed array is:\n");
    print_array(a, n);

    return 0;
}

void print_array(int arr[], int n){
    printf("\n");
    for(int i=0;i<(n);i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
