#include <stdio.h>

int main() {

    printf("Enter a Number: ");
    int num;
    scanf("%d", &num);
    int length=0, temp=num, dig, arm=0;
    while (temp>0){
        dig=temp%10;   
        temp/=10;
        length++;
    }
    int temp2=num;
    while (temp2>0){
        dig=temp2%10;
        int power = 1;
        for (int i = 0; i < length; i++) {
            power *= dig;
        }
        arm += power;
        temp2/=10;
    }
    if (arm==num){
        printf("%d is an Armstrong number\n", num);
    }
    else{
        printf("%d is not an Armstrong number\n", num);
    }
    return 0;
}