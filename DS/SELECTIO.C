#include<stdio.h>
#include<conio.h>
void main()
{

	int x[10],i,j,temp;
	clrscr();
	printf("Enter 10 Value...\n");
	for(i=0;i<10;i++)
	{
		printf("\t [%d]:",i+1);
		scanf("%d",&x[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
	printf("\n\t After sorting...\n");
	for(i=0;i<10;i++)
	{
		printf("\n\t %d",x[i]);
	}
	getch();

}