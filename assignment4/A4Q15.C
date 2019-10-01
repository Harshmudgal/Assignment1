#include<stdio.h>

void main()
{
	for(int i=0;i<100;i++)
	{
		if(((i/10)%2==0&&i%2!=0)||((i/10)%2!=0&&i%2==0))
		printf("%d,",i);
		}
		
		}