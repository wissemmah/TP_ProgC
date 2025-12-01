#include <stdio.h>
#include <string.h>

int main() {
    double pi = 3.1416;
    double r = 6;

    printf("L'aire du cercle = %.4f\n", pi * (r * r));
    printf("Le perimetre du cercle = %.4f\n", 2 * pi * r);

    return 0;
}

