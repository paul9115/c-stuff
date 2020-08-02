#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/*
    TODO:
        Write a program that assigns random integers in the following ranges 
        1, 2
        1, 100
        0, 9
        1000, 1112
        -1, 1
        -3, 11
*/

void generator(int min, int max);

int main(void) {
    srand(time(NULL));
    generator(1, 2);
    generator(1, 100);
    generator(0, 9);
    generator(1000, 1112);
    generator(-1, 1);
    generator(-3, 11);
}

void generator(int min, int max){
    int num;
    num = min + rand() % (max + 1 - min);
    printf("%d\n", num);
}