#include <stdio.h>

int main() {
   char n[10];
   double s,m = 0.0;

   scanf("%s %lf %lf", &n, &s, &m);
   printf("TOTAL = R$ %.2lf\n", s + (0.15 * m));

   return 0;
}