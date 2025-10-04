#include<stdio.h>
int main(){
    int i,n,mul;
    printf("enter value of n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        mul= i*i;
    printf("square = %d \n",mul);
    }
        return 0;
    }