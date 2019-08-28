#include <stdio.h>
#include <math.h>

const double PI = 3.14159;

int main() {
   double raio = 0.0;

   scanf("%lf", &raio);
   printf("A=%.4lf\n", PI * pow(raio, 2));

   return 0;
}