#include <stdio.h>

int main() {
    // Declaration of variable
    int num1;
    int num2;
    float product;
    
    printf("Enter the first number");
    scanf("%d", &num1);
    
    printf("Enter the second number");
    scanf("%d", &num2);
    
    product = num1 * num2;
    
    printf("product: %d %d = %f", num1, num2, product);
	
    return 0;
}