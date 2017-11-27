#include <stdio.h>

int lengthOfString(char str[]) {
    int i=0;

    while(str[i] != '\0')
        i++;

    return i;
}

int main() {
    char str[10];

    while(scanf("%s",str) != EOF) {
        printf("Length is %d\n",lengthOfString(str));
    }

    return 0;
}
