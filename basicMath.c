#include <stdio.h>

/* 
Write a program that asks the user for 2 integers,
obtains them from the user and prints thier 
    *sum
    *square of the sum
    *cube of the sum
    *difference
    *sqaure of the difference,
    *cube of the difference 
*/

int main(void) {
    int num1, num2, sum, squareSum, cubeSum, diff, squareDiff, cubeDiff;
    printf("%s", "Enter 2 numbers: ");
    scanf("%d%d", &num1, &num2);

    sum = num1 + num2;
    squareSum = sum * sum;
    cubeSum = squareSum * sum;
    if(num1 > num2) {
        diff = num1 - num2;
    } else {
    diff = num2 - num1;
    }
    squareDiff = diff * diff;
    cubeDiff = squareDiff * diff;

    printf("%s%d%s%d%s%d%s%d%s%d%s%d%s", "The sum of the numbers is: ", sum, "\nThe square of the numbers is: ", squareSum, "\nThe cube of the numbers is: ", cubeSum, "\nThe difference is: ", diff, "\nThe square of the difference is: ", squareDiff, "\nThe cube of the diffence is: ", cubeDiff, "\n");
}