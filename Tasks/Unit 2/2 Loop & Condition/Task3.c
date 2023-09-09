#include "stdio.h"
void main()
{
float num1,num2,num3;
printf("Enter three numbers: ");
scanf("%f",&num1);
scanf("%f",&num2);
scanf("%f",&num3);
if (num1 > num2 && num1> num3)
printf("largest number is : %f",num1);

else if (num2 > num1 && num2> num3)
printf("largest number is : %f",num2);


else if (num3 > num2 && num3> num1)
printf("largest number is : %f",num3);

else
printf("Error");


}