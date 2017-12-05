#include<stdio.h>
int main() {
    int n;
    int i,sum;

    while(scanf("%d",&n) == 1) {
        i = 1;
        sum = 0;

        while(i<=n) {
            sum += i;
            i++;
        }
        printf("Sum is %d",sum);
    }

    return 0;
}