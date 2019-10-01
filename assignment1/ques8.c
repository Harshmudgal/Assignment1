#include<stdio.h>
void main()
{
int x,y;
printf("\n Enter the number");
scanf("%d",&x);
y=x%10;
x=x+y;
printf("The new number is=%d",x);
}

