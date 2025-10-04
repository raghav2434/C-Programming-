#include<stdio.h>
int main(){int l,b,area,parameter;
    printf("Enter value of length\n");
    scanf("%i",&l);
    printf("Enter value of breadth\n");
    scanf("%i",&b);
    area = l*b;
    parameter = 2*(l*b);
    printf("area = %d\n",area);
    printf("parameter = %d\n",parameter);
    return 0;
    
}


