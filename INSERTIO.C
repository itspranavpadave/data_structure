#include<stdio.h>
#include<conio.h>
void main ()
{
	 int i,j,temp;
	 int a[]={56,23,12,20,5,15};
	 clrscr();
	 printf("unsorted array is :");
	 for(i=0;i<6;i++)
	 {
	 printf("\t%d",a[i]);
	 }
	 for(i=0;i<6-1;i++)
		{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
			{
			 a[j+1]=a[j];
			 j--;
			 }
			 a[j+1]=temp;
		}
	 printf("\nsorted array is :");
	 for(i=0;i<6;i++)
	 {
	 printf("\t %d",a[i]);
	 }
   getch();
}