#include<stdio.h>
#include<conio.h>

void main ()
{
	 int i,j,temp,size;
	 int a[100];
	 clrscr();
	 printf("how many arrey element you want:");
	 scanf("%d",&size);
	 printf("Enter arrey elements :");
	 for(i=0;i<size;i++)
	 {
	 scanf("\t%d",&a[i]);
	 }
	 printf("unsorted arrey is :");
	 for(i=0;i<size;i++)
		{
		printf("\t%d",a[i]);
		}
	 for(i=0;i<size-1;i++)
		{
		for(j=0;j<size-i-1;j++)
			{
			if(a[j]>a[j+1])
				{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	 }
	 printf("\nsorted array is :");
	 for(i=0;i<size;i++)
	 {
	 printf("\t %d",a[i]);
	 }
   getch();
}