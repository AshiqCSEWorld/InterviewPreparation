// write a c program to generate fibonacci sequence given firstNumber and secondNumber of the sequence

#include <stdio.h>
int main() {
	int first,second,sum=0,num,counter=0;

	printf("Enter the number of terms: ");
	scanf("%d",&num);

	printf("Enter first number: ");
	scanf("%d",&first);

	printf("Enter second number: ");
	scanf("%d",&second);

	printf("\nFibonacci series: %d %d ",first,second);

	while(counter < num) {
		sum = first + second;
		printf("%d ",sum);
		first = second;
		second = sum;

		counter++;
	}
  return 0;	
}
