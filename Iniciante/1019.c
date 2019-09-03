#include <stdio.h>

int main() {   
    int v,h,m,s;    

    scanf("%i", &v);

    h=v/3600;
    m=v%3600/60;
    s=v%3600%60;
    printf("%i:%i:%i\n", h,m,s);

    return 0;
}