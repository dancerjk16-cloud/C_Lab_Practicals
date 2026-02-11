#include <stdio.h>

int main() {
int a, b;
char op;
printf("\n---Calculator---\n\n");
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
printf("\nEnter operator: ");
scanf("\n%c", &op);
switch (op){
    case '+':
        printf("\n%d + %d = %d", a, b, a+b);
        break;
    case '-':
        printf("\n%d - %d = %d", a, b, a-b);
        break;
    case '*':
        printf("\n%d * %d = %d", a, b, a*b);
        break;
    case '/':
        if (b != 0) {
            printf("\n%d / %d = %d", a, b, a/b);
        } else {
            printf("\nError: Division by zero is not allowed.");
        }
        break;
    default:
        printf("\nInvalid operator.");
}
    return 0;
}