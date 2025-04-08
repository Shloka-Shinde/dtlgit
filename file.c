#include <stdio.h>

int main() {
    double a, b;
    char op;

    printf("Enter an expression (e.g. 2 + 3): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+': printf("Result: %.2lf\n", a + b); break;
        case '-': printf("Result: %.2lf\n", a - b); break;
        case '*': printf("Result: %.2lf\n", a * b); break;
        case '/':
            if (b != 0)
                printf("Result: %.2lf\n", a / b);
            else
                printf("Error: Division by zero\n");
            break;
        default: printf("Invalid operator\n");
    }

    return 0;
}

