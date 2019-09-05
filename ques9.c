#include<stdio.h>
void main()
{
int num;
printf("Enter the number");
scanf("%d",&num);
int rem=num%10;//to store the last digit
int y=num/100;
y=y*10+rem;
printf("the new number is %d",y);
}

