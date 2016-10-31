#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++){
        long long int n,m;
        scanf("%lld",&n);
        m=n;
        int arr[10]={0};
        int j=0,count=0;        
        while ( n != 0) {
           arr[j] = n%10;
           n /= 10;
           j++;
        }
        for(j=0;j<10;j++){
            if(arr[j]!=0){
                if(m%arr[j]==0)
                    count++;
            }                
        }
        printf("%d\n",count);
    }
    return 0;
}
