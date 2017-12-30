#include <stdio.h>
int main() {
	int terms,first=0,second=1,i,sum=0;

	printf("Enter number of terms: ");
	scanf("%d",&terms);

	printf("Fibonacci series: ");

	for(i=0; i<terms; i++) {
		printf("%d ",first);
		sum = first + second;
		first = second;
		second = sum;
	}

	return 0;


}
