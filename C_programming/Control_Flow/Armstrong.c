#include <stdio.h>
#include <math.h>

int main() {
    int number,originalNumber,n=0,result=0,rem;

    printf("Enter an integer: ");
    scanf("%d",&number);

    originalNumber = number;

    while(originalNumber != 0) {
        originalNumber /= 10;
        n++;
    }

    originalNumber = number;

    while(originalNumber != 0) {
        rem = originalNumber % 10;
        result += pow(rem,n);
        originalNumber /= 10;
    }

    (result == number) ? printf("Armstrong\n") : printf("Not Armstrong\n");

    return 0;

}