#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divide(int a, int b);
int mod(int a, int b);

int main() {

    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    if(op == '+') {
        printf("Result = %d\n", add(a, b));
    }

    else if(op == '-') {
        printf("Result = %d\n", sub(a, b));
    }

    else if(op == '*') {
        printf("Result = %d\n", mul(a, b));
    }

    else if(op == '/') {
        printf("Result = %d\n", divide(a, b));
    }

    else if(op == '%') {
        printf("Result = %d\n", mod(a, b));
    }

    else {
        printf("Invalid operator!\n");
    }

    return 0;
}


int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int mod(int a, int b) {
    return a % b;
}