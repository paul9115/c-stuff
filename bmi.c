#include <stdio.h>

/* 
    TODO:
        Create a BMI calculator that reads the users weight in kilos and height in meters 
        then calculates and displays the body mass index 

        BMI = weightInKilos / (heightInMeters * heightInMeters)
*/
int main (void){
    float weight, height, bmi;

    printf("%s", "Enter your height (m): ");
    scanf("%f", &height);
    printf("%s", "Enter your weight(kg): ");
    scanf("%f", &weight);

    bmi = weight / (height * height);
    printf("%s%0.2f\n", "You have a BMI of: ", bmi);
    if(bmi < 18.5) {
        printf("%s", "You are underweight\n");
    }else if (bmi > 18.5 && bmi < 25) {
    printf("%s", "Your weight is normal\n");
    } else if (bmi >= 25 && bmi < 30) {
    printf("%s", "You are overweight!\n");
    }else {
    printf("%s", "You are obese!\n");
    }
}