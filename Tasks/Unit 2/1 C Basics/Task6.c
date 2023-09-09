#include "stdio.h"
void main()
{
    float num1, num2;
    float temp;
    printf("Enter value of a: ");
    scanf("%f", &num1);
    printf("Enter value of b: ");
    scanf("%f", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping, value of a = %f \n", num1);
    printf("After swapping, value of b = %f", num2);
}