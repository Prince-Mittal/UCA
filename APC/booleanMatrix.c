#include <stdio.h>
//If any position in array has 0 then make that row and column every element 0 without using extra auxiliary storage

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //Outer row and column value
    int r=1,c=1;
    for(int i=0;i<n;i++){
        r*=arr[0][i];
        c*=arr[i][0];
    }
    //Check inner array and update in outer row and column accordingly
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[i][j]==0){
                arr[i][0]=0;
                arr[0][j]=0;
            }
        }
    }
    //Make all inner row and column 0 according to the outer layer
    for(int i=1;i<n;i++){
        if(arr[0][i]==0){
            for(int j=1;j<n;j++){
                arr[j][i]=0;
            }
        }
        if(arr[i][0]==0){
            for(int j=1;j<n;j++){
                arr[i][j]=0;
            }
        }
    }
    //Check outer layer and make it 0 accordingly
    for(int i=0;i<n;i++){
        if(r==0)
            arr[0][i]=0;
        if(c==0)
            arr[i][0]=0;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

