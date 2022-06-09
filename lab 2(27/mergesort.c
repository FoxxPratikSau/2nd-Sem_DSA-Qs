#include <stdlib.h>
#include<stdio.h>
void mergesort(int a[], int p, int r);
void print_array(int arr[], int n);
void merge(int a[], int p, int q, int r);



int main(){
    int n;
    printf("Enter Array Size:");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter array elements:");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("The sorted array is:");
    mergesort(a, 0, n-1);
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


void merge(int a[], int p, int q, int r){
    int n=(r-p+1);
    int temp[n];
    int k=0, i=p, j=q+1;
    while( (i<=q) || (j<=r) ){
        if(i>q){
            temp[k]=a[j];
            k++;
            j++;
        }
        else if(j>r){
            temp[k]=a[i];
            k++;
            i++;
        }
        else if(a[i]<=a[j]){
            temp[k]=a[i];
            k++;
            i++;
        }
        else{
            temp[k]=a[j];
            k++;
            j++;
        }
    }
    for(int i=0; i<n; i++){
        a[p+i]=temp[i];
    }
}

void mergesort(int a[], int p, int r){
    int q=(p+r)/2;
    if(p<r){
        mergesort(a, p, q);
        mergesort(a, q+1, r);
        merge(a, p, q, r);
    }
}