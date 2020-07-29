#include <stdio.h>

/*
    TODO:
    Write a program that takes 3 integers from the user, then prints the 
        *sum
        *average
        *product
        *smallest
        *largest
*/

int main(void){
    int num1, num2, num3, sum, product, smallest, largest;
    float average;
    printf("%s", "Enter 3 different integers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    sum = num1 + num2 + num3;
    average = (float) sum / 3;
    product = num1 * num2 * num3;

    smallest = num1;
    if(num2 < smallest) {
        smallest = num2;
    }
    if(num3 < smallest){
        smallest = num3;
    }

    largest = num1;
    if(num2 > largest){
        largest = num2;
    }
    if(num3 > largest){
        largest = num3;
    }

    printf("%s%d%s%f%s%d%s%d%s%d%s", "The sum is: ", sum, "\nThe Average is: ", average, "\nThe product is: ", product, 
    "\nThe smallest is: ", smallest, "\nThe largest is: ", largest, "\n");

    return 0;
}