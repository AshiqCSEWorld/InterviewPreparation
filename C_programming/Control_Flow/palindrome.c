// write a C program to check wheather given number is palindrome or not 
#include <stdio.h>
int main() {
	int number,originalNumber,rem,reversedNumber=0;
	
	printf("Enter a number: ");
	scanf("%d",&number);

	originalNumber = number;

	while(originalNumber != 0) {
		rem = originalNumber % 10;
		reversedNumber = reversedNumber * 10 + rem;
		originalNumber /= 10;
	}

	(number == reversedNumber)? printf("Palindrome") : printf("Not palindrome");

	return 0;	
}
