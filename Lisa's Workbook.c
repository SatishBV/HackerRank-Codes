#include <stdio.h>
#include <string.h>

int main() {

    int n,k,i=0,j=0,page=1,count=0;
    scanf("%d %d",&n,&k);
    int t[n];
    for(i=0;i<n;i++){
        scanf("%d",&t[i]);
        int prob=1;
        while(prob<=t[i]){
            if(prob==page)
                count++;
            if(prob%k==0||prob==t[i])
                page++;
            prob++;
        }       
    }
    printf("%d",count);
    return 0;
}
