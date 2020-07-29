#include <stdio.h>

int main(void){
    int integer1;
    int integer2;
    int result;

    printf("Enter first integer: ");
    scanf("%d", &integer1);
    printf("Enter second integer: ");
    scanf("%d", &integer2);
    result = integer1 + integer2;
    printf("The result is %d\n", result);
}