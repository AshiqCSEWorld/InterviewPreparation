#include <stdio.h>
int main() {
    int n;

    do {
        printf("Enter a negative number: ");
        scanf("%d",&n);
    } while(n <= 0);

   printf("Entered number is %d ",n);

   return 0; 

}