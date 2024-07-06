#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    double a, b;

    while (1) {
        printf("Enter an operator (+, -, *, /), if you want to exit press x: ");
        scanf(" %c", &ch);

        if (ch == 'x') {
            printf("Exiting...\n");
            break;
        }

        printf("Enter two operands: ");
        scanf("%lf %lf", &a, &b);

        switch (ch) {
            case '+':
                printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
                break;
            case '-':
                printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
                break;
            case '*':
                printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
                break;
            case '/':
                if (b != 0)
                    printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
                else
                    printf("Error! Division by zero.\n");
                break;
            default:
                printf("Error! Please enter a valid operator.\n");
        }

        printf("\n");
    }

    return 0;
}
