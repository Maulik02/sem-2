#include<stdio.h>
#include<conio.h>
#define size 10
int q[size],rear=-1,front=-1;
void add();
void disp();
void del();
void update();
void main()
{
	int z;
	while (1)
	{
		clrscr();
		printf("\n\t[1] Insert Data");
		printf("\n\t[2] Display Data");
		printf("\n\t[3] Delet Data");
		printf("\n\t[4] Update Data");
		printf("\n\t[5] Exit");
		printf("\n\t Enter Your Choice:");
		scanf("%d",&z);
		switch(z)
		{
			case 1:
				add();
				break;

			case 2:
				disp();
				break;
			case 3:
				del();
				break;
			case 4:
				update();
				break;
			case 5:
				exit();
				default:
				printf("\n\tInvalid choice");

		}
		getch();

	}
}
void add()
{
	if(rear==size-1)
	{
		printf("\n\t Queue is full...");
	}
	else
	{
		if(front==-1)
		{
			front=0;
			rear=0;

		}
		else
		{
			rear++;

		}
		printf("\n\tEnter Value:");
		scanf("%d",&q[rear]);
		printf("\n\tValue Inserted...");

	}
}
void disp()
{
	int i;
	if(front==-1)
	{
		printf("\n\t Queue is Empty...");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\t%d",q[i]);
		}
	}
}
void del()
{
	if(front==-1)
	{
		printf("\n\t Queue is Empty...");
	}
	else
	{
		if(front==rear)
		{
			front=-1;
			rear=-1;

		}
		else
		{
			front++;

		}
		printf("\n\tData Removed...");
	}
}
void update()
{
	int ov,i,flag;
	if(front==-1)
	{
		printf("\n\t Queue is Empty...");
	}
	else
	{
		disp();
		printf("\n\tEnter Value:");
		scanf("%d",&ov);
		for(i=front;i<=rear;i++)
		{
			if(ov==q[i])
			{
				printf("\n\tEnter Value:");
				scanf("%d",&q[i]);
				printf("\n\tValue Updated...");
				flag=1;
			}
		}
		if(flag==0)
		printf("\n\tNot Found",ov);
	}
}