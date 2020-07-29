#include <stdio.h>

/*
    Write a program that reads an integer then determines and prints 
    whether the number is odd or even
*/

int main(void) {
    int num;
    printf("%s", "Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0) {
        printf("%d%s", num, " is even\n");
    }else {
    printf("%d%s", num, " is odd\n");
    }
    return 0;
}