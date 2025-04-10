#include <stdio.h>

int main() {
    int a, b, result;
    char op;

    printf("Enter hex expression (e.g. A + F): ");
    scanf("%x %c %x", &a, &op, &b);

    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b != 0)
                result = a / b;
            else {
                printf("Error: Division by zero\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("Result in hex: %X\n", result);
    return 0;
}


