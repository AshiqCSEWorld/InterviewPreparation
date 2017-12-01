#include <stdio.h>
int main() {
    int far,cel,upper,lower;
    upper = 300;
    lower = 0;
    
    far = lower;
    
    while(far <=300) {
        cel = 5 * (far - 32) / 9;
        printf("%d\t %d\n",far,cel);
        far += 20;
    }

    return 0;
}
