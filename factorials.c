#include <stdio.h>

/* 
    TODO:
        Write a program that prints the factorials of integers in the range of 1 - 5
*/

int main(void) {
    int factoral = 1;

    for(int i = 1; i <= 5; i++){
        for( int j = i; j >= 1; j--) {
            factoral *= j;
        }
        printf("%d%s%d\n", i, " factorial is ", factoral );
        factoral = 1;
    }
}