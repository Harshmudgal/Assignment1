#include<stdio.h>

void main()
{
	for(int i=0;i<100;i++)
	{
		if((i%3==0)&&(i%5!=0)||(i%3!=0)&&(i%5==0))
		printf("%d,",i);
		}
		
		}

