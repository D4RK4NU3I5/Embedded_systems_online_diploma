#include "stdio.h"
void main()
{
    float num1, num2;
    printf("Enter two integers: ");
    scanf("%f", &num1);
    scanf("%f", &num2);

    printf("Product: %f", num1 * num2);
}