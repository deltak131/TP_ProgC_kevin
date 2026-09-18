#include <stdio.h>

static void afficher_binaire(unsigned int nombre)
{
    int bit_trouve = 0;

    for (int position = (int)(sizeof(nombre) * 8) - 1; position >= 0;
         position--) {
        unsigned int bit = (nombre >> position) & 1U;
        if (bit != 0U || bit_trouve != 0 || position == 0) {
            putchar(bit ? '1' : '0');
            bit_trouve = 1;
        }
    }
    putchar('\n');
}

int main(void)
{
    const unsigned int nombres[] = {0U, 4096U, 65536U, 65535U, 1024U};
    const size_t nombre_de_valeurs = sizeof(nombres) / sizeof(nombres[0]);

    for (size_t i = 0; i < nombre_de_valeurs; i++) {
        printf("%u : ", nombres[i]);
        afficher_binaire(nombres[i]);
    }

    return 0;
}
