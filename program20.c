#include<stdio.h>
int main(){
    int i,n;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=1; i<=n ;i=i++){
        if(i%2==0)  
        printf("%i",i);
    }
        return 0;
    }