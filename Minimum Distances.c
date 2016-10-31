#include <stdio.h>

int main(){
    int n; 
    scanf("%d",&n);
    long long int a[n],i,j;
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    long long int min = 999999,d;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                d = j-i;
                if(d<min)
                    min = d;
            }
        }
    }
    if(min==999999)
        printf("-1");
    else
        printf("%lld",min);
    return 0;
}
