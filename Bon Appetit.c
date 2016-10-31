#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,k,bc;
    scanf("%d %d",&n,&k);
    int a[n],i,sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    int ba=(sum-a[k])/2;
    scanf("%d",&bc);
    if(bc<=ba)
        printf("Bon Appetit");
    else
        printf("%d",bc-ba);
    return 0;
}
