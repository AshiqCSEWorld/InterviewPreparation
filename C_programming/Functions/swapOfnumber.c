#include <stdio.h>

void swap(int *, int *);

void main() {
	int x,y;
	printf("Enter value of x and y: ");
	scanf("%d%d",&x,&y);

	swap(&x,&y);

	printf("After swapping:\n");
	printf("value of x and y is %d %d ",x,y);
}

void swap(int *a,int *b) {
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}
