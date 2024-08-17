#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],y[5],z[10],i,a,j=0,k=0,temp,m;
	clrscr();
	printf("\n\t Enter The Value X...\n");
	for(i=0;i<5;i++)
	{
		printf("\t [%d]: ",i+1);
		scanf("%d",&x[i]);
	}
	for(i=0;i<5;i++)
	{
	   for(a=i+1;a<5;a++)
	   {
		if(x[i]>x[a])
		{
			temp=x[i];
			x[i]=x[a];
			x[a]=temp;
		}
	   }
	}
	printf("\n\t Enter The Value Y...\n");
	for(i=0;i<5;i++)
	{
		printf("\t [%d]: ",i+1);
		scanf("%d",&y[i]);
	}
	for(i=0;i<5;i++)
	{
		for(a=i+1;a<5;a++)
		{
			if(y[i]>y[a])
			{
				m=y[i];
				y[i]=y[a];
				y[a]=m;
			}
		}
	}
	i=0;
	while(i<5 && j<5)
	{
		if(x[i]<y[j])
		{
			z[k++]=x[i++];
		}
		else
		{
			z[k++]=y[j++];
		}
	}
	while(i<5)
	{
		z[k++]=x[i++];
	}
	while(j<5)
	{
		z[k++]=y[j++];
	}
	printf("\n\tEnter The Value Z: ");
	for(i=0;i<10;i++)
	{
		printf("  %d",z[i]);
	}
	getch();
}