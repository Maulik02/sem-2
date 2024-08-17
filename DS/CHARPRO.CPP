#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",i);
			j/2;

		}
		printf("\n");

	}
	getch();
}