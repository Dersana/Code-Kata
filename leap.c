#include<stdio.h>
void main()
{
int year;
 printf("Enter the year\n")
 scanf("%d",&year);
if(((year%4==0)&&(year%100!=0))||(year%400==0))
 printf("yes");
else
 printf("No");
}
