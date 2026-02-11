#include <stdio.h>
//check occurrence of a digit in a number
int main() {

    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    printf("Enter a digit to check its occurrence: ");
    int d;
    scanf("%d", &d);
    int temp=n, count=0, dig;
    while (temp>0){
        dig=temp%10;
        if (dig==d){
            count++;
        }
        temp/=10;
    }
    printf("Occurence of %d in %d: %d\n", d, n, count);
    return 0;
}