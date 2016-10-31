#include <math.h>
#include <stdio.h>

int main(){
    long long int t; 
    scanf("%lld",&t);
    long long int i=1,c=3;
    while(i+c<=t){
        i+=c;
        c*=2;
    }
    printf("%lld",c-(t-i));
    return 0;
}
