#include<stdio.h>
#include<conio.h>
typedef struct xyz node;
struct xyz
{
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
	printf("\n\t Enter Value:");
	scanf("%d",&temp->data);
	printf("\n\t Recovd inserted successfulle...");
	temp->next=NULL;
	if(first==NULL)
	{
		first=temp;
	}
	else
	{
		last->next=temp;
	}
	last=temp;
	count++;

}

void disp()
{

	int sr=0;
	if(first==NULL)
	{
		printf("\n\t Linklist Is Empty");
	}
	else
	{
		temp=first;
		while(temp!=NULL)
		{
			printf("\n\t(%d):%d",++sr,temp->data);
			temp=temp->next;
		}
	}
}

void del()
{
	int ov;
	node *erase;
	if(first==NULL)
	{
		printf("\n\t Record not found...");
	}
	else
	{
		disp();
		temp=first;
		printf("\n\t Enter Value For Delet:");
		scanf("%d",&ov);
		if(first->data==ov)
		{
			erase=first;
			first=first->next;

		}
		else
		{
			while(temp!=NULL)
			{
				if(temp->next->data==ov)
				{
					erase=temp->next;
					if(erase==last)
					{
						last=temp;
					}
					temp->next=erase->next;
				}
				temp=temp->next;
			}
		}
		free(erase);
	}
	count--;
}
void insert()
{
	int pos,i=1;
	node *ins;
	if(first==NULL)
	{
		add();
	}
	else
	{
		disp();
		printf("\n\t Enter Position No:");
		scanf("%d",&pos);
		if(pos>count)
		{
			add();
		}
		else
		{
			ins=(node*)malloc(sizeof(node));
			printf("\n\t Enter Value:");
			scanf("%d",&ins->data);
			if(pos==1)
			{
				ins->next=first;
				first=ins;

			}
			else
			{
				temp=first;
				while(i<pos-1)
				{
					temp=temp->next;
					i++;
				}
				ins->next=temp->next;
				temp->next=ins;

			}
			printf("\n\n\t Value inserted...");
			count++;
		}
	}
}



void main()
{
	int z;

	while(1)
	{
		clrscr();
		printf("\n\t[1] Add Data");

		printf("\n\t[2] Display Data");
		printf("\n\t[3] Count Data");
		printf("\n\t[4] Delet Data");
		printf("\n\t[5] Insert Data");
		printf("\n\t[6] Exit");
		printf("\n\tenter value:");
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
				printf("\n\tCount Data:%d",count);
				break;
			case 4:
				del();
				break;
			case 5:
				insert();
				break;
			case 6:
				exit();
			default:
				printf("\n\t Invalid value");
		}
		getch();
	}
}