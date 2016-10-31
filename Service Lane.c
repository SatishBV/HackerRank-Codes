https://www.hackerrank.com/challenges/service-lane

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int t; 
    scanf("%d %d",&n,&t);
    int w[n],x;
    for(x=0;x<n;x++){
        scanf("%d",&w[x]);
    }
    for(x=0;x<t;x++){
        int i,j,k,min=10;
        scanf("%d %d",&i,&j);
        for(k=i;k<=j;k++){
            if(w[k]<min)
                min = w[k];
        }
        printf("%d\n",min);
    }
    return 0;
}
