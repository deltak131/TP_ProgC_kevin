
#include <stdio.h>

int main(void)
{
    const int num1 = 16;
    const int num2 = 3;
    const char op = '+';

    switch (op) {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 == 0) {
            fprintf(stderr, "Division par zero impossible.\n");
            return 1;
        }
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
        break;
    case '%':
        if (num2 == 0) {
            fprintf(stderr, "Modulo par zero impossible.\n");
            return 1;
        }
        printf("%d %% %d = %d\n", num1, num2, num1 % num2);
        break;
    case '&':
        printf("%d & %d = %d\n", num1, num2, num1 & num2);
        break;
    case '|':
        printf("%d | %d = %d\n", num1, num2, num1 | num2);
        break;
    case '~':
        printf("~%d = %d\n", num1, ~num1);
        break;
    default:
        fprintf(stderr, "Operateur inconnu: %c\n", op);
        return 1;
    }

    return 0;
}
