

#include <stdio.h>

int main(void)
{
    const int a = 16;
    const int b = 3;

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
    printf("%d == %d : %s\n", a, b, a == b ? "true" : "false");
    printf("%d > %d : %s\n", a, b, a > b ? "true" : "false");
    return 0;
}
