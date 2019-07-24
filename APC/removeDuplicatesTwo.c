#include<stdio.h>
#include<stdlib.h>
//Remove duplicates with more than two copies
int main(){
    int n;
    scanf("%d",&n);
    int *arr = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i] == arr[i+1] && arr[i] == arr[i+2]){
            continue;
        }
        else{
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<j;i++){
        printf("%d ",arr[i]);
    }
}