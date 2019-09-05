#include<stdio.h>
void main()
{
int x,y,z,sum;
printf("Enter the number");
scanf("%d",&x);
y=x%10;
z=(x%100)/10;
sum=z+y;
printf("\n The sum is %d",sum);
}
 


