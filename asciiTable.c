#include <stdio.h>

/*
    TODO:
        Write a program that prints a table of all the ASCII values 
        in the range of 65 to 90
*/

int main(void) {
    printf("%s\t%s\n", "ASCII", "Character");
    for(int i = 33; i < 128; i++){
        printf("%d\t%c\n", i, i);
    }
}