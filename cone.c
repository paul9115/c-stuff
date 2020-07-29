#include <stdio.h>
#include <math.h>

/* 
    TODO:
        Write a program that reads the radius of a circle at bottom of a cone as a float
        and the height as a float then computes and prints the surface area of a right circular cone 
        A=πr(r+sqrt(h^2+r^2))
*/

int main(void) {
    float radius, height, a ;
    printf("%s", "Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("%s", "Enter the height of the cone: ");
    scanf("%f", &height);
    a = M_PI * radius *(radius + (sqrt(pow(height, 2) + pow(radius, 2))));
    printf("%s%0.3f\n", "The surface area of the cone is: ", a);
}