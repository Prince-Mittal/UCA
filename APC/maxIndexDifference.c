#include<stdio.h>

// Return the max difference of index Max(j-i) where A[j] >= A[i]

struct elem{
    int value;
    int index;
};

int cmpfunc(const void * a,const void * b){
    int elem1 = ((struct elem*)a)->value;
    int elem2 = ((struct elem*)b)->value;
    return (elem1 - elem2 > 0);
}

int main(){
    int n = 4;
    int a[] = {2,4,3,1};
    struct elem arr[n];
    for(int i=0;i<n;i++){
        arr[i].value = a[i];
        arr[i].index = i;
    }
    qsort(arr,n,sizeof(arr[0]),cmpfunc);
    int min = arr[0].index;
    int max = 0;
    for(int i=1;i<n;i++){
        if(arr[i].index - min > max){
            max = arr[i].index - min;
        }
        min = (arr[i].index<min?arr[i].index:min);
    }
    printf("%d",max);
}