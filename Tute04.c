/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int mininum(int a, int b);
int maxinum(int a, int b);
int multiply(int a, int b);

int main() {
   int no1, no2;

   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);

   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);

   printf("%d \n", mininum(no1, no2));

   printf("%d \n", maxinum(no1, no2));

   printf("%d \n", multiply(no1, no2));

   return 0;
}

int mininum(int a, int b){
   int min = 0;
   if (a < b)
      min = a;
   else 
      min = b;

   return min;
}

int maxinum(int a, int b){
   int max = 0;
   if (a > b)
      max = a;
   else 
      max = b;

   return max;
}

int multiply(int a, int b){
   return a * b;
}