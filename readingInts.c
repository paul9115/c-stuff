#include <stdio.h>

/*
    TODO:
        Write a program that reads an integer of up to 5 digits and determines 
        how many digits are 7's
*/

int main(void) {
    int num, digit, counter;

    printf("%s", "Enter an integer: ");
    scanf("%d", &num);

    while(num > 0) {
        digit = num % 10;
        if(digit == 7){
            counter++;
        }
        num /= 10;
    }
    printf("%s%d%s\n", "There where ", counter, " 7's in that number");
}