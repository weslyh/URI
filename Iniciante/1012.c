#include <stdio.h>
#include <math.h>

const double PI = 3.14159;

int main() {
    double A,B,C = 0.0;
    scanf("%lf %lf %lf", &A,&B,&C);

    printf("TRIANGULO: %.3lf\n", (A*C)/2);
    printf("CIRCULO: %.3lf\n", PI * pow(C, 2));
    printf("TRAPEZIO: %.3lf\n", (C * (A+B))/2);
    printf("QUADRADO: %.3lf\n", pow(B,2));
    printf("RETANGULO: %.3lf\n", A*B);
    return 0;
}