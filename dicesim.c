#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll(int);

int main(void) {
    unsigned int sides;
    srand(time(NULL));
    printf("%s", "Enter the number of faces on the die: ");
    scanf("%d", &sides);
    int frequency[sides];
    for(int i = 0; i < sides; i++){
        frequency[i] = 0;
    }
    for(int i = 1; i < 6000000; i++){
        frequency[roll(sides)]++;
    }
    printf("%s\t%s\t%s\n", "Face", "Frequency", "Percentage");
    for(int i = 0; i < sides; i++){
        printf("%d\t%d\t\t%0.2f\n", i + 1, frequency[i], ((float) frequency[i] / 6000000) * 100);
    }
}

int roll(sides){
    return rand() % sides;
}