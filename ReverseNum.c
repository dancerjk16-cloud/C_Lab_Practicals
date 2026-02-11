#include <stdio.h>

int main() {

    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    int temp=n, rev=0, dig;
    while (temp>0){
        dig=temp%10;
        rev=rev*10+dig;
        temp/=10;
    }
    printf("The reverse of %d is %d\n", n, rev);
    return 0;
}