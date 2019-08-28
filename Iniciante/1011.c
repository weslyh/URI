#include <stdio.h>
#include <math.h>

const double PI = 3.14159;

int main() {
   double raio;

   scanf("%lf", &raio);
   printf("VOLUME = %.3lf\n", (4.0/3) * PI * pow(raio,3));

   return 0;
}