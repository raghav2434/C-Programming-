#include<stdio.h>
int main(){
    int x , y;
    printf("Enter value of x and y ");
    scanf("%i%i",&x,&y);
    (x>y)? printf("x is larger") : printf("y is larger");
    return 0;
}