#include<stdio.h>
void main()
{
int a,b,c;
PRINTF("ENTER THREE NUMBERS\n")
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
printf("%d",a);
else if(b>a&&b>c)
printf("%d",b);
else if(c>a&&c>b)
printf("%d",c);
}
