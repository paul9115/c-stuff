#include <stdio.h>

/*
    Write aprogram that reads two integers 
    and determines whether they are multiples 
*/

int main(void) {
    int num1, num2, tmp;

    printf("%s", "Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    if(num1 < num2){
        tmp = num1;
        num1 = num2;
        num2 = tmp;
    }
    if(num1 % num2 == 0) {
        printf("%d%s%d%s", num2, " is a multiple of ", num1, "\n");
    }else {
    printf("%d%s%d%s", num1, " and ", num2, " are not multiples\n");
    }
}