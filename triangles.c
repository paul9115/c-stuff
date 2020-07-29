#include <stdio.h>

/* 
    TODO:
        Write a program that prints the following triangles sepereately one below the other
        (A)                    (B)                    (C)                   (D)
        *                       **********      **********                      *
        **                     *********          *********                    **
        ***                   ********              ********                  ***
        ****                 *******                  *******                ****
        *****               ******                      ******              *****
        ******             *****                          *****             ******
        *******           ****                              ****           *******
        ********         ***                                  ***         ********
        *********       **                                      **       *********
        **********     *                                          *     **********

    */

    int main(void) {
        char c = '*', s = ' ';
        int temp;
        // A
        for(int i = 0; i < 10; i++){
            for(int j = 0; j <= i; j++) {
                printf("%c", c);
            }
            printf("\n");
        }
        printf("\n");

        // B
        for(int i = 10; i > 0; i--){
            for(int j = 0; j < i; j++) {
                printf("%c", c);
            }
            printf("\n");
        }
        printf("\n");

        // C
        for(int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++) {
                if(j - i >= 0) {
                    printf("%c", c);
                }else {
                printf("%c", s);
                }
            }
            printf("\n");
        }
        printf("\n");

        // D
        for(int i = 10; i > 0; i--){
            for (int j = 0; j < 10; j++) {
                temp = j - i;
                if(temp >= 0) {
                    printf("%c", c);
                }else {
                printf("%c", s);
                }
            }
            printf("\n");
        }
        printf("\n");
   }

    