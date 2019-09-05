#include<stdio.h>
void main()
{
int x;
printf("Enter the number");
scanf("%d",&x);
int last=x%10;
int selast=(x%100)/10;
int y=x/100;
y=y*100+last*10+selast;
printf("The new number is=%d",y);
}


