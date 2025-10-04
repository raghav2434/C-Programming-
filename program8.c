#include<stdio.h>
int main(){
    int x,y,sum,sub,mul,rem;
    printf("Enter value of x\n");
    scanf("%i",&x);
    printf("Enter value of y\n");
    scanf("%i",&y);
    sum = x+y;
    sub = x-y;
    mul = x*y;
    rem = x%y;
    printf("Addition = %d\n",sum);
    printf("Subtraction = %d\n",sub);
    printf("Multiplication = %d\n",mul);
    printf("Remainder = %d",rem);
    return 0;
}