#include <stdio.h>

int main() {
    int km;
    double l;
    scanf("%i %lf", &km, &l);
    printf("%.3lf km/l\n", (km*1000)/(l*1000));

    return 0;
}