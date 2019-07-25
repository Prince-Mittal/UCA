#include<stdio.h>
//Find square root or nearest square root using binary search

int sq_root(int num){
    int l = 0;
    int r = num;
    int mid;
    while(l<=r){
        mid = (l+r)/2;
        if(mid*mid == num){
            return mid;
        }
        else if(mid*mid > num)
            r=mid-1;
        else
            l=mid+1;
    }
    return r;
}

int main(){
    int num;
    scanf("%d",&num);
    printf("Square root : %d",sq_root(num));
    
}