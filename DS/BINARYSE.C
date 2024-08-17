#include<stdio.h>
#include<conio.h>
#define size 10
void bsrch(int[],int);
void main()
{
	int x[size],i,z;
	clrscr();
	printf("\n\t Enter %d value \n",size);
	for(i=0;i<size;i++)
	{
		printf("(%d):",i+1);
		scanf("%d",&x[i]);
	}
	printf("Enter the search value :");
	scanf("%d",&z);
	bsrch(x,z);
	getch();
}
void bsrch(int x[],int z)
{
	int first=0,last=size-1,mid=(first+last)/2,flag=0;
	while(flag==0 && first<=last)
	{
		if(z==x[mid])
		{
			printf("value found");
			flag=1;
			break;
		}
		else if(z<x[mid])
		{
			last=mid-1;
			mid=(first+last)/2;
		}
		else
		{
			last=mid+1;
			mid=(first+last)/2;
		}
	}
	if(flag==0)
	printf("value not found");
}