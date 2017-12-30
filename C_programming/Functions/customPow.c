// write a custom C-function to implement pow() function
#include <stdio.h>
int power(int base, int n) {
	int p;

	for(p=1; n>0; n--) {
		p = p * base;
	}
	return p;
}

int main(int a, int b) {
	scanf("%d%d",&a,&b);

	printf("%d",power(a,b));

	return 0;
}
