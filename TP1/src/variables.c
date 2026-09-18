#include <stdio.h>

int main(void)
{
    signed char sc = 'A';
    unsigned char uc = 250;
    short s = -1234;
    unsigned short us = 5678;
    int i = -42000;
    unsigned int ui = 42000U;
    long int li = -123456789L;
    unsigned long int uli = 123456789UL;
    long long int lli = -9876543210LL;
    unsigned long long int ulli = 9876543210ULL;

    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.41421356237L;

    printf("signed char       : %c (code: %d)\n", sc, sc);
    printf("unsigned char     : %u\n", uc);
    printf("short             : %d\n", s);
    printf("unsigned short    : %u\n", us);
    printf("int               : %d\n", i);
    printf("unsigned int      : %u\n", ui);
    printf("long int          : %ld\n", li);
    printf("unsigned long int : %lu\n", uli);
    printf("long long int     : %lld\n", lli);
    printf("unsigned long long: %llu\n", ulli);
    printf("float             : %f\n", f);
    printf("double            : %lf\n", d);
    printf("long double       : %Lf\n", ld);

    return 0;
}
