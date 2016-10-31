https://www.hackerrank.com/challenges/beautiful-triplets

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n,d,i,j,k,count=0;
    scanf("%d %d",&n,&d);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-2;i++){        
        for(j=i+1;j<n-1;j++){
            if(a[j]==a[i]+d){
                for(k=j+1;k<n;k++){
                    if(a[k]==a[j]+d)
                        count++;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}
