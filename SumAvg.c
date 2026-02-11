#include <stdio.h>

int main() {
    int num[5], avg, sum;
    printf("Enter 5 numbers:\n");
    scanf ("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
    sum = num[0] + num[1] + num[2] + num[3] + num[4];
    avg = sum / 5;
    printf("Average = %d\n", avg);
    return 0;
}