https://www.hackerrank.com/challenges/utopian-tree

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
        int n,h=1,j,spr=1;
        scanf("%d",&n);
        if(n!=0){
            for(j=1;j<=n;j++){
                if(spr==1){
                    h*=2;
                    spr=0;
                }
                else{
                    h+=1;
                    spr=1;
                }                   
            }
        }
        printf("%d\n",h);
    }
    return 0;
}
