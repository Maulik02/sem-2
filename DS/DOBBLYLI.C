#include<stdio.h>
#include<conio.h>
typedef struct xyz node;
struct xyz
{
	node *pre;
	int data;
	node *next;
};
node *first=NULL;
node *last;
node *temp;
int count=0;
void add()
{
	temp=(node*)malloc(sizeof(node));
	printf("\n\t\tEnter Value:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(first==NULL)
	{
		temp->pre=NULL;
		first=temp;
	}
	else
	{
		temp->pre=last;
		last->next=temp;

	}
	last=temp;
	count++;
	printf("\n\t\tValue inserted...");
}
void disp()
{
	int i=1;
	if(first==NULL)
	{
		printf("\n\t\tData not Found...");
	}
	else
	{
		temp=first;
		while(temp!=NULL)
		{
			printf("\n\t\t[%d]:%d",i++,temp->data);
			temp=temp->next;
		}
	}
}
void del()
{
	int dl,flag=0;
	if(first==NULL)
	{
		printf("\n\t\tData not Found...");
	}
	else
	{
		disp();
		printf("\n\t Enter the value for delet:");
		scanf("%d",&dl);
		if(first->data==dl)
		{
			first=first->next;
			free(first->pre);
			first->pre=NULL;
			flag=1;
		}
		else if(last->data==dl)
		{
			last=last->pre;
			free(last->next);
			last->next=NULL;
			flag=1;
		}
		else
		{
			temp=first->next;
			while(temp!=last)
			{
				if(temp->data==dl)
				{
					temp->pre->next=temp->next;
					temp->next->pre=temp->pre;
					free(temp);
					flag=1;
					break;
				}
				temp=temp->next;
			}
		}
		if(flag==0)
		{
			printf("\n\t%d not found...",dl);
		}
		else
		{
			printf("\n\t Recode found...");
		}
	}
}
void main()
{
	int z;
	while (1)
	{
		clrscr();
		printf("\n\tDoubbly Linklist");
		printf("\n\t================");
		printf("\n\t[1] Add Data");
		printf("\n\t[2] Display Data");

		printf("\n\t[3] Delet Data");
		printf("\n\t[4] Exit");
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
				exit();
				default:
				printf("\n\tInvalid choice");

		}
		getch();
	}
}