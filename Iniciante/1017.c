#include <stdio.h>

int main() {
    int t, v;

    scanf("%i %i", &t, &v);
    printf("%.3lf\n", (v/12.0) * t);

    return 0;
}