
#include <stdio.h>

int main(void)
{
    const int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int espace = 1; espace <= n - i; espace++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("Generation de la pyramide terminee.\n");
    return 0;
}
