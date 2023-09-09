#include "stdio.h"
void main()
{
    int num,iteration;
    int fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0)
    {
        for (iteration = 1; iteration <= num; iteration++)
        {
            fact*=iteration;
        }
        printf("The factorial = %d", fact);
    }

    else
        printf("Error !!! Factorial of negative number doesn't exsist");
}