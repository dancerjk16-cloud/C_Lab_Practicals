#include <stdio.h>

int main() {

    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    int temp=n, dig, sum=0;
    while (temp>0){
        dig=temp%10;
        sum+=dig;
        temp/=10;
    }
    printf("The sum of the digits of %d is %d\n", n, sum);
    return 0;
}