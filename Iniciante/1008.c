#include <stdio.h>

int main() {
   int f,h = 0;
   double v = 0.0;

   scanf("%i %i %lf", &f, &h, &v);
   printf("NUMBER = %i\n", f);
   printf("SALARY = U$ %.2lf\n", h * v);

   return 0;
}