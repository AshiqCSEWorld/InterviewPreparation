#include <stdio.h>
int main() {
    int n,i,sum=0;

    for(i=0; i<15; i++) {
        printf("Enter integer: ");
        scanf("%d",&n);

        if(n < 0) {
            continue;
        }
        sum = sum + n;
    }
    printf("Sum of all positive number is: %d ",sum);
    return 0;
}