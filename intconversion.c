#include <stdio.h>

/*
    TODO:
        Write a program that prints a table of the binary, octal and hexidecimal equivalents of the 
        decimal numbers in the range of 1 to 256
*/

int main(void) {
    int j, binary[8], n;
    printf("%s\t%s\t%s\t%s\n", "Decimal", "Octal", "Hex", "Binary");
    for(int i = 1; i < 256; i++){
        printf("%d\t%o\t%X\t", i, i, i);
        n = i;
        for(j = 0; n > 0; j++){
            binary[j] = n % 2;
            n /= 2;
        }
        for(j = j - 1; j >= 0; j--){
            printf("%d", binary[j]);
        }
        printf("\n");
    }
}