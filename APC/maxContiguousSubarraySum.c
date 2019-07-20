#include<stdio.h>
//Sum of maximum contiguous subarray

int main(){
    int n;
    scanf("%d",&n);
    int *arr = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum = arr[0];
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]+sum >= arr[i])
            sum+=arr[i];
        else
            sum = arr[i];
        
        if(sum>=max)
            max = sum;
    }
    printf("Sum of max contiguous subarray : %d",max);
    return 0;
}