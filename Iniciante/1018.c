#include <stdio.h>

int main() {
    int n100,n50,n20,n10,n5,n2,n1,v,resto;

    scanf("%i", &v);

    resto = v % 100;

    n100 = v/100;
    n50 = resto/50;
    n20 = (resto % 50)/20;
    n10 = ((resto % 50) % 20)/10;
    n5 = (((resto % 50) % 20) % 10)/5;
    n2 = ((((resto % 50) % 20) % 10) % 5)/2;
    n1 = (((((resto % 50) %20) % 10) % 5) % 2)/1;

    printf("%i\n", v);
    printf("%i nota(s) de R$ 100,00\n", n100);
    printf("%i nota(s) de R$ 50,00\n", n50);
    printf("%i nota(s) de R$ 20,00\n", n20);
    printf("%i nota(s) de R$ 10,00\n", n10);
    printf("%i nota(s) de R$ 5,00\n", n5);
    printf("%i nota(s) de R$ 2,00\n", n2);
    printf("%i nota(s) de R$ 1,00\n", n1);

    return 0;
}