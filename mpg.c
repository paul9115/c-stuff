#include <stdio.h>

/*
    TODO:
        Write a program that takes the fuel used and milage driven from the user and displays the MPG
        At the end the program should return the average MPG
*/

int main(void){
  float fuel, miles, mpg, totalFuel, totalMiles, average;
  int counter = 0;

  do {
    printf("%s", "Enter the gallons used (-1 to end): ");
    scanf("%f", &fuel);
    if(fuel == -1){
        break;
    }
    printf("%s", "Enter the miles driven: ");
    scanf("%f", &miles);
    totalFuel += fuel;
    mpg = miles / fuel;
    totalMiles += miles;
    counter++;
    printf("%s%0.2f\n", "The miles/gallon for this tank was: ", mpg);
    }while (fuel != -1);
    if(totalFuel > 0 && totalMiles > 0 ){
      average = (totalMiles / totalFuel);
      printf("%s%0.2f\n", "The average miles/gallon was: ", average);
    }
}