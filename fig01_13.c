#include <stdio.h>

int main(void){
    int num1;
    int num2;

    printf("Enter two numbers and I will tell you the relationships they satisfy: ");
    scanf("%d%d", &num1, &num2);

    if(num1 == num2) {
        printf("The two numbers are equal\n");
    }
    if(num1 != num2) {
        printf("The two numbers are not equal\n");
    }
    if(num1 > num2){
        printf("%d is greater than %d\n", num1, num2);
    }
    if(num1 >= num2){
        printf("%d is greater than or equal to %d\n", num1, num2);
    }
    if(num1 < num2){
        printf("%d is less than %d\n", num1, num2);
    }
    if(num1 <= num2){
        printf("%d is less than or equal to %d\n", num1, num2);
    }
}