#include <stdio.h>
int main() {
    int num;

    while(scanf("%d",&num) == 1) {

        ((num % 2) == 0)? printf("Even\n") : printf("Odd\n");

    }

    return 0;

}
