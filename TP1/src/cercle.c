#include <stdio.h>

int main(void)
{
    const double pi = 3.14159;
    const double rayon = 6.0;
    const double aire = pi * rayon * rayon;
    const double perimetre = 2.0 * pi * rayon;

    printf("Aire du cercle : %.2f\n", aire);
    printf("Perimetre du cercle : %.2f\n", perimetre);
    return 0;
}
