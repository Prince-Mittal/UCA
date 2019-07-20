#include<stdio.h>
/*if the start value of a group comes in between the values of another group then merge them together*/
struct Interval{
    int s;
    int e;
};

int cmp(void* a, void* b){
    int s1 = ((struct Interval*)a)->s;
    int s2 = ((struct Interval*)b)->s;
    return (s1-s2 > 0);
}

int main(){
    int n;
    scanf("%d",&n);
     struct Interval *arr = (struct Interval*)malloc(sizeof(struct Interval)*n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&arr[i].s,&arr[i].e);
    }
    qsort(arr,n,sizeof(arr[0]),cmp);
    for(int i=0;i<n-1;i++){
        if(arr[i+1].s <= arr[i].e){
            arr[i].e = arr[i].e>arr[i+1].e?arr[i].e:arr[i+1].e;
            for(int j=i+1;j<n;j++){
                arr[j] = arr[j+1];
            }
            n--;
            i--;
        }
    }
    for(int i=0;i<n;i++){
        printf("\(%d,%d\) ",arr[i].s,arr[i].e);
    }
}