#include <stdio.h>

/*
    TODO:
        Write a program that prints 100 astrisks to the terminal 
        after every tenth astrisk print a new line
*/

int main(void) {
    for(int i = 1; i <= 100; i++) {
        if(i % 10 == 0) {
            printf("%s", "*\n");
        }else {
        printf("%s", "*");
        }
    }
    printf("%s", "\n");
}