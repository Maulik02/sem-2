#include<stdio.h>
#include<conio.h>
typedef struct xyz node;
struct xyz
{
	int data;
	node *next;
};
int count;
node *last=NULL;
node *temp;
void add()

{
	temp=(node*)malloc(sizeof(node));
	printf("\n\n\t Enter Data:");
	scanf("%d",&temp->data);
	if(last==NULL)
	{
		temp->next=temp;
	}
	else
	{
		temp->next=last->next;
		last->next=temp;
	}
	last=temp;
}
void disp()
{
	if(last==NULL)
	{
		printf("\n\t Empty");
	}
	else
	{
		do
		{
			temp=temp->next;
			printf("\n\t%d",temp->data);
		}while(temp!=last);
	}
}
void main()
{
	int z;
	while(1)
	{
		clrscr();
		printf("\n\tclrcular linklist");
		printf("\n\t-----------------------");
		printf("\n\t[1] Add Data");
		printf("\n\t[2] Display Data");
		printf("\n\t[3] Exit");
		printf("\n\t Enter Choice:");
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
				exit();
			default:
				printf("\n\t Invalid chice");
		}
		getch();
	}


}