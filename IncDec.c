#include <stdio.h>

int main() {
    int x=5;
    printf("\n1. Value of x: %d\n",x);
    printf("\n2. Value of x: %d\n",++x);
    printf("\n3. Value of x: %d\n",x);
    printf("\n4. Value of x: %d\n",++x);
    printf("\n5. Value of x: %d\n",x++);
    printf("\n6. Value of x: %d\n",x);
    ++x;
    printf("\n7. Value of x: %d\n",x);
    --x;
    printf("\n8. Value of x: %d\n",x);
    return 0;
}