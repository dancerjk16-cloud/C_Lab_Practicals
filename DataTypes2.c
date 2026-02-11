#include <stdio.h>

int main() {

    int x;
    x=65;
    printf("Value of x: %c", x);
    printf("\n%c %d %f", 'A', 35, 4.5);
    printf("\n%5d% 8.3f", 753, 4.56789);
    printf("\n%-5d% 8.3f", 753, 4.56789);
    printf("\n%08d% 8.3f", 753, 4.56789);
    return 0;
}