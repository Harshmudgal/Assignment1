#include<stdio.h>

void main()
{
	int i;
	for(i=0;i<100;i++)
	{
		int rem=i%10;
		if(((i<10)&&(i==7))||((((i-rem)/10)+rem)%7==0))
		printf("%d,",i);
		}
		
		}




