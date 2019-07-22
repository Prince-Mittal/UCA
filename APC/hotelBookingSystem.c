#include<stdio.h>
#include<stdlib.h>
//Hotel Booking System
struct interval{
    int arrival;
    int departure;
};

int cmpfun(const void * a,const void * b){
    int first = ((struct interval*)a)->arrival;
    int second = ((struct interval*)b)->arrival;
    return first - second > 0;
}

int main(){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    printf("Enter Arrival and Departure dates : \n");
    struct interval *arr = (struct interval*)malloc(sizeof(struct interval)*n);
    int *dept = (int*)calloc(k,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d %d",&arr[i].arrival,&arr[i].departure);
    }
    int allocated = 0;
    qsort(arr,n,sizeof(arr[0]),cmpfun);
    for(int i=0;i<n;i++){
        if(allocated < k){
            printf("Room No. %d allocated to customer %d\n",allocated+1,i+1);
            dept[allocated] = arr[i].departure;
            allocated++;
        }
        else{
            int flag = 0;
            for(int j=0;j<k;j++){
                if(arr[i].arrival >= dept[j]){
                    printf("Room No. %d allocated to customer %d\n",j+1,i+1);
                    dept[j] = arr[i].departure;
                    flag =1;
                    break;
                }
            }
            if(flag == 0){
                printf("No rooms available for customer %d at this time\n",i+1);
            }
        }
    }
    return 0;
}