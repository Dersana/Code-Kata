#include<stdio.h>
#include<ctype.h>
void main()
{
char c;
scanf("%c",&c);
if(isalpha(c))     //build-in function
 printf("Alphabet");
else
 printf("No");
}
