#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int t;
    scanf("%d",&t);
    int i=0;
    for(i=0;i<t;i++){
        long long int s,m,n;
        scanf("%lld %lld %lld",&n,&m,&s);        
        m = m+s-1;
        m = m%n;
        if(m==0)
            printf("%lld\n",n);
        else
            printf("%lld\n",m);        
    }
    return 0;
}
