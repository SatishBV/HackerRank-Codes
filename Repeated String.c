#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){

    char s[100];
    long long int n;
    scanf("%s",s);
    scanf("%lld",&n);
    int i;
    long long int count=0,total=0;    
    int j = n%strlen(s);
    for(i=0;i<strlen(s);i++){
        if(s[i]=='a')
            total++;
    }  
    for(i=0;i<j;i++){
        if(s[i]=='a')
            count++;
    }
    total*=n/strlen(s);
    if(j==0)
        printf("%lld",total);
    else
        printf("%lld",count+total);
    return 0;
}
