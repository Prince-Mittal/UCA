#include<stdio.h>

int main(){
    int l[3] = {2,1,3};
    int r[3] = {5,3,9};
    int max_element = 0;
    for(int i=0;i<3;i++){
        if(r[i]>max_element){
            max_element = r[i];
        }
    }
    int arr[max_element];
    for(int i=0;i<max_element;i++)
        arr[i] = 0;
    for(int i=0;i<3;i++){
        arr[l[i]]++;
        arr[r[i]+1]--;
    }
    int loc=0,max=0,prev=0;
    for(int i=0;i<max_element;i++){
        if(prev + arr[i] > max){
            max = prev + arr[i];
            loc = i;
        }
        prev += arr[i];
    }
    printf("%d",loc);
}