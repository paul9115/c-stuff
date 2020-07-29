#include <stdio.h>

/*
    TODO:
        Write a program that prints a checkerboard pattern using astrisks 
*/

int main(void) {
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++) {
            if(i % 2 == 0){
                printf("%s", "* ");
            } else {
            printf("%s", " *");
            }
        }
        printf("%s", "\n");
    }
}