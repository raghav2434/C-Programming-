#include<stdio.h>
int main(){
    int i,n,mul;
    printf("enter value of n\n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        mul=n*i;
    printf("mul=%d\n",mul);
    }
        return 0;
    }