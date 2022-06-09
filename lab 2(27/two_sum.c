#include <stdio.h>
#include <stdlib.h>


int main(){
    int n;
    printf("Enter Array Size:");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter array elements:");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int target;
    printf("Enter your target\n");
    scanf("%d",&target);
    //two_sum(a,n,target);
    int p,q;
    for (int w = 1; w < n; w++){
        for (int x = w; x < n; x++){
            if (a[x] == target - a[x-w]){
                //return x-w, x;
                printf("%d %d\n",a[x],a[x-w]);
                
            }
            
            //break;
        }
        //break;
    }

   // printf("%d %d\n",a[p],a[q]);

    
    return 0;
    
}
// void two_sum(int arr[],int n, int target){
//     for (int w = 1; w < n; w++){
//         for (int x = w; x < n; x++){
//             if (arr[x] == target - arr[x-w]){
//                 //return x-w, x;
//                 int p=x-w;
//                 int q=x;
//             }
//         }
//     }
//     // return 0;
// }
