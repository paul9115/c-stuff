#include <stdio.h>

int main(void) {
    int p, q, r, s, sum;
    printf("%s", "Enter four integers: ");
    scanf("%d%d%d%d", &p, &q, &r, &s);
    sum = p + q + r + s;
    printf("%s%d%s", "The sum of the four integers is: ", sum, "\n");
}