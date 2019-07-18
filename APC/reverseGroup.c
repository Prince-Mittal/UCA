#include<stdio.h>

int main(){
    int arr[11]= {1,2,3,4,5,6,7,8,9,10,11};
    int k;
    scanf("%d",&k);
    for(int i=0;i<11;i+=k){
        if(i+k<=11){
            for(int j=0;j<k/2;j++){
                int temp = arr[i+j];
                arr[i+j] = arr[i+k-j-1];
                arr[i+k-j-1] = temp;
            }
        }
        else{
            for(int j=0;j<(11-i)/2;j++){
                int temp = arr[i+j];
                arr[i+j] = arr[11-j-1];
                arr[11-j-1] = temp;
            }
        }
    }
    for(int i=0;i<11;i++){
        printf("%d ",arr[i]);
    }
}