#include <stdio.h>
int main() {
    char operator;
    double a,b;

    printf("Enter an operator (+,-,*,/)");
    scanf("%c",&operator);

    printf("Enter two operand: ");
    scanf("%lf %lf",&a,&b);

    switch(operator) {
        case '+':
            printf("Addition of a and b: %lf ",a+b);
            break;
        
        case '-':
            printf("Subtraction of a and b: %lf ",a-b);
            break;
        
        case '*':
            printf("Multiplication of a and b: %lf ",a*b);
            break;
        
        case '/':
            printf("Division of a and b: %lf ",a/b);
            break;
            
    }

    return 0;

}