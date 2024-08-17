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
	if((rear+1)%size==front)
	{
		printf("\n\tQueue is Full...");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		if(rear<size-1)
		{
			rear++;
		}
		else
		{
			rear=0;
		}
		printf("\n\t Enter Value:");
		scanf("%d",&q[rear]);
		printf("\n\t Value Inserted...");
	}
}
void disp()
{
	int i;
	if(front==-1)
	{
		printf("\n\t Queue is empty");
	}
	else
	{
		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
			{
				printf("\t%d",q[i]);
			}
		}
		else
		{
			for(i=front;i<size;i++)
			{
				printf("\t%d",q[i]);
			}
			for(i=0;i<=rear;i++)
			{
				printf("\t%d",q[i]);
			}
		}
	}
}
void del()
{
	if(front==-1)
	{
		printf("\n\t Queue is empty...");
	}
	else
	{
		printf("\n\t Removed for queue...",q[front]);
		if(front<rear)
		{
			front++;
		}
		else
		{
			front=0;
		}
	}
}
void update()
{
	int i,ov,flag=0;
	if(front==-1)
	{
		printf("\n\t Queue is empty...");
	}
	else
	{
		disp();
		printf("Enter Value For Upadte:");
		scanf("%d",&ov);
		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
			{
				if(q[i]==ov)
				{
					flag=1;
					break;

				}
				if(front<=rear)
				{
					if(q[i]==ov)
					{
						flag=1;
						break;

					}
				}
			}
		}
		else
		{
			for(i=front;i<size;i++)
			{
				flag=1;
				break;
			}
			if(flag==0)
			{
				for(i=0;i<=rear;i++)
				{
					if(q[i]==ov)
					{
						flag=1;
						break;
					}
				}
			}
		}
		if(flag==0)
		{
			printf("\n\t%d not found");
		}
		else
		{
			printf("\n\tEnter New Value");
			scanf("%d",&q[i]);
		}

	}
}






