/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  float distance, rate_1 = 0.0, rate_2 = 0.0;

  printf("Enter the dstance travelled : ");
  scanf("%f", &distance);

  if (distance <= 30){
    rate_1 = distance * 50.0;
  }

  if (distance > 30){
    rate_2 = (30 * 50) + (distance - 30) * 50.0;
  }
  
  if (rate_1 == 0.0){
   printf("\nTotal rate for %.2f distance : Rs. %.2f \n", distance, rate_2);
  }
  else
   printf("\nTotal rate for %.2f distance : Rs. %.2f \n", distance, rate_1);

  return 0;
}
