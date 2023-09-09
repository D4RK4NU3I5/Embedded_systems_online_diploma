#include "stdio.h"
void main()
{
int limit;
int sum = 0;
printf("Enter an integer: ");
scanf("%d",&limit);

for (int iteration = 1;iteration<=limit;iteration++)
{
    sum+=iteration;
}
printf("Sum = %d",sum);
}