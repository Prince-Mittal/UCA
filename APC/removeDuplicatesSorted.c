#include<stdio.h>
#include<stdlib.h>
//Remove duplicates from a sorted array
int main(){
    int n;
    scanf("%d",&n);
    int *arr = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i] != arr[j]){
            j++;
            arr[j] = arr[i];
        }
    }
    for(int i=0;i<=j;i++){
        printf("%d ",arr[i]);
    }
}