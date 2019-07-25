#include<stdio.h>

//Find the students whose marks are between 30 and 40

int main(){
    int n;
    scanf("%d",&n);
    int *arr = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int l = 0;
    int r = n-1;
    int mid;
    while(l < r){
        mid = (r+l)/2;
        if(arr[mid] >= 30){
            r = mid;
        }
        else{
            l = mid+1;
        }
    }
    int lower_bound = r;
    l = 0;
    r = n-1;
    while(l < r){
        mid = (r+l)/2;
        if(arr[mid] > 39){
            r = mid;
        }
        else{
            l = mid+1;
        }
    }
    int upper_bound = l;
    printf("Total Student in between 30 to 40 are : %d",upper_bound-lower_bound);
}