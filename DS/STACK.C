#include<stdio.h>
#include<conio.h>
#define size 10
int x[size],tos=-1;
void add();
void disp();
void main()
{
	int z;
	while (1)
	{
		clrscr();
		printf("\n\t[1] Insert Data");
		printf("\n\t[2] Display Data");
		printf("\n\t[3] Count Data");
		printf("\n\t[4] Delet Data");
		printf("\n\t[5] Update Data");
		printf("\n\t[6] Exit");
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
				count();
				break;
			case 4:
				del();
				break;
			case 5:
				update();
				break;
			case 6:
				exit();
				default:
				printf("\n\tInvalid choice");

		}
	}
}