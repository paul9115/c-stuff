#include <stdio.h>
#include <stdbool.h>

/* 
    Write a program that inputs one five digit integer 
    and seperates the number into individual digits without using an array
*/

int main(void) {
    int num, ret[5];
    bool valid = false;
    while(!valid){
        printf("%s", "Enter a 5 digit integer: ");
        scanf("%d", &num);
        if(num >= 10000 && num <= 99999){
            valid = true;
        }
    }
    for(int i = 0; i < 5; i++){
        ret[i] = num % 10;
        num /= 10;
    }
    for(int i = 4; i >= 0; i--){
        printf("%d%s", ret[i], " ");
    }
    printf("%s", "\n");
}