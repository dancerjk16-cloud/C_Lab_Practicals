// check if prime number
#include <stdio.h>

int main() {

    printf("Enter a number: ");
    int n;
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not a prime number\n", n);
        return 0;
    }

    int isPrime = 1;

    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}