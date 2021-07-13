/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int num1, num2;
  float avg = 0.0;
  
  printf("Enter two marks : \n");
  scanf("%d %d", &num1, &num2);

  printf("Average = %.2f", (num1 + num2) / 2.0);

  return 0;
}

