#include<stdio.h>

int main() {
    int value_1,value_2,sum;
    printf("Enter value 1:");
    scanf("%d",&value_1);
    printf("Enter value 2:");
    scanf("%d",&value_2);

    sum= value_1+value_2;
    printf("%d+%d=%d", value_1,value_2,sum);


    return 0;
}
