#include<stdio.h>
void main()
{
int x,y,z;//x and y are for remainder i.e last and second last dgit and z for the number
printf("\n Enter the number ");
scanf("%d",&z);
x=z%10;
y=z%100;
int a=(y-x)/10;
printf("The second last digit is =%d",a);
}

