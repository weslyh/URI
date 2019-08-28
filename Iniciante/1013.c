#include <stdio.h>
#include<stdlib.h>

int main() {
    int aux,a,b,c = 0;
    scanf("%i %i %i", &a, &b, &c);
    aux = (a+b+abs(a-b))/2;

    if (c > aux)
      aux = c;

    printf("%i eh o maior\n", aux);

    return 0;
}