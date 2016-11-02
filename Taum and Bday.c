https://www.hackerrank.com/challenges/taum-and-bday

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
        long w,b,x,y,z;
        scanf("%ld %ld %ld %ld %ld",&b,&w,&x,&y,&z);
        long cost;
        if(b*(y+z)<=b*x&&w*(x+z)<=w*y){
            cost = b*(y+z) + w*(x+z);
        }
        else if(b*(y+z)>b*x&&w*(x+z)<=w*y){
            cost = b*x + w*(x+z);
        }
        else if(b*(y+z)<=b*x&&w*(x+z)>w*y){
            cost = b*(y+z)+w*y;
        }
        else if(b*(y+z)>b*x&&w*(x+z)>w*y){
            cost = b*x + w*y;
        }        
        printf("%ld\n",cost);
    }
    return 0;
}
