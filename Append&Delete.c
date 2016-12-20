#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char s[100];
    scanf("%s",s);
    char t[100];
    scanf("%s",t);
    int k; 
    scanf("%d",&k);
    int i=0;
    for(i=0;i<strlen(s)&&i<strlen(t);i++){
        if(s[i]!=t[i]){
            break;
        }
    }
    int d = strlen(s)-i;
    int a = strlen(t)-i;
    int p = k-d-a;
    if(p==0){
        printf("Yes");
    }
    else if(p<0){
        printf("No");
    }
    else{
        if(p%2==0){
            printf("Yes");
        }
        else{
            if(p>=2*i){
                printf("Yes");
            }
            else{
                printf("No");
            }
        }
    }
    return 0;
}
