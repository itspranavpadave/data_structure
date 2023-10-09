#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<=5;j++)
			{
				printf("*");
			}
			printf("\n");
	}
	getch();
}
