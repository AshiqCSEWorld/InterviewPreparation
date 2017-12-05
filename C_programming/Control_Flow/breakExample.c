#include <stdio.h>
int main() {
    int n,i;

    for(i=0; i<14; i++) {
        printf("Read integer: ");
        scanf("%d",&n);

        if(n<0) {
            break;
        }
    }

    return 0;
}