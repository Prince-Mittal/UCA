#include<stdio.h>
#include<stdlib.h>
// Find the max continuos 1's and you can flip k zeros in between
int main(){
    int n;
    int k;
    scanf("%d %d",&n,&k);
    int *arr = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int r=0,l=0,count_zero=0,max=0,r_index=0,l_index=0;
    while(r<n){
        if(arr[r] == 1){
            r++;
        }
        else if(arr[r] == 0 && count_zero < k){
            r++;
            count_zero++;
        }
        else if(arr[r] == 0 && count_zero == k){
            while(arr[l]!=0)
                l++;
            l++;
            count_zero--;
        }
        if(r-l >= max){
            max = r-l;
            r_index = r-1;
            l_index = l;
        }
    }
    printf("Max window size is %d \n",max);
    printf("The windows index is : ");
    for(int i=l_index;i<=r_index;i++){
        printf("%d ",i);
    }
    return 0;
}
