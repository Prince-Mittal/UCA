#include <stdio.h>
#include <math.h>
//Forest Gathering Problem Codechef
int main() {
	// your code goes here
	unsigned long long int w,len;
	int n;
	scanf("%lld %lld %lld",&n,&w,&len);
	int h[n][2];
	int i;
	for(i=0;i<n;i++)
	scanf("%d %d",&h[i][0],&h[i][1]);
	unsigned long long int l=0,r=pow(10,18),sum=0,mid;
	while(l<r){
	   mid = (l+r)/2;
	   sum = 0;
	   for(i=0;i<n;i++){
	       if(h[i][0]+h[i][1]*mid >=len)
	            sum += h[i][0]+h[i][1]*mid;
	       if(sum >= w)
	            break;
	   }
	   if(sum > w)
	    r = mid;
	   else
	    l = mid+1;
	}
	if(l==r)
	    printf("%lld",l);
	else
	    printf("%lld",mid);
    return 0;
}