#include "stdio.h"
void main()
{
char c;
printf("Enter a character: ");
scanf("%c",&c);

if ((c>'A'&&c<'Z')||(c>'a'&&c<'z'))
printf("%c is alphabet",c);
else
printf("%c is not alphabet",c);

}