#include<stdio.h>
int main(){
    int num,cube;
    printf("Enter number =");
    scanf("%d",&num);
    if(num % 2 ==0){
        cube = num * num * num;
        printf("cube of %d",cube);
        return 0;
    }
}
