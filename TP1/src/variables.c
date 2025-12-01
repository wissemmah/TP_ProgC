#include <stdio.h>

int main() {
    // Déclaration et affectation des variables

    // char
    signed char sc = -100;
    unsigned char uc = 200;

    // short
    signed short ss = -30000;
    unsigned short us = 60000;

    // int
    signed int si = -2000000;
    unsigned int ui = 4000000;

    // long int
    signed long int sli = -500000000L;
    unsigned long int uli = 1000000000UL;

    // long long int
    signed long long int slli = -900000000000LL;
    unsigned long long int ulli = 1800000000000ULL;

    // float
    float f = 3.14f;

    // double
    double d = 3.14159265359;

    // long double
    long double ld = 3.141592653589793238L;

    // Affichage des variables
    printf("signed char       = %d\n", sc);
    printf("unsigned char     = %u\n", uc);

    printf("signed short      = %d\n", ss);
    printf("unsigned short    = %u\n", us);

    printf("signed int        = %d\n", si);
    printf("unsigned int      = %u\n", ui);

    printf("signed long int   = %ld\n", sli);
    printf("unsigned long int = %lu\n", uli);

    printf("signed long long int   = %lld\n", slli);
    printf("unsigned long long int = %llu\n", ulli);

    printf("float             = %.2f\n", f);
    printf("double            = %.12f\n", d);
    printf("long double       = %.18Lf\n", ld);

    return 0;
}
