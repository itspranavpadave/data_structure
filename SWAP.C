#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2,no3;
	clrscr();
	printf("Enter first no:");
	scanf("%d",&no1);
	printf("Enter second no:");
	scanf("%d",&no2);
	printf("Entered values are: \nno1=%d \tand no2=%d",no1,no2);
	no3=no1+no2;
	no1=no3-no1;
	no2=no3-no2;
	printf("\nValues after swapping are: \nno1=%d \tand no2=%d",no1,no2);
	getch();
}