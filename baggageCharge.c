#include <stdio.h>

/*
    TODO:
        Write a program that calculates and prints the baggage charges for for
   customers. The charges are as follows: £0.50 minimum charge for up to 3 hours
            £0.25 for each hour (or part thereof) after that
            The maximum charge is £1.00 and maximum time is 6 hours
*/

float charge(float t);

int main(void) {
  float hours[5], price[5], totalHours = 0, totalCharges = 0;
  for(int i = 0; i < 5; i++){
      printf("%s", "How long was the baggage stored: ");
      scanf("%f", &hours[i]);
      price[i] = charge(hours[i]);
  }
  printf("%s\t%s\t%s\n", "Customer", "Duration", "Price (£)");
  for(int i = 0; i < 5; i++){
      printf("%d\t\t%0.2f\t\t%0.2f\n", i + 1, hours[i], price[i]);
      totalHours += hours[i];
      totalCharges += price[i];
  }
  printf("%s\t\t%0.2f\t\t%0.2f\n", "TOTAL", totalHours, totalCharges);
}

float charge(float t) {
    float total;
    if(t <= 3) {
        return 0.50;
    }else if (t == 6) {
        return 1.00;
    }else {
    total = 0.50;
    t -= 3;
    while(t > 0){
        total += 0.25;
        t--;
    }
    return total;
    }
}