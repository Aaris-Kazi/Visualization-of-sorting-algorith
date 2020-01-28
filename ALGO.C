#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
	int x1,y1,x2,y2,n,i,j,temp,k;
	int a[50];
	char output[256];
	int gd=DETECT,gm;
	printf("Enter the number of lines:");
	scanf("%d",&n);
	printf("Enter the value:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	clrscr();
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setcolor(2);
	line(0,450,0,0);
	line(550,450,0,450);
	setcolor(15);
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n-i-1; j++)
		{
			if (a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;

			}
		}
	}
	for(i=0,j=5;i<n;i++,j +=20)
	{
		line(20+j,450,20+j,a[i]);
		sprintf(output,"%d",a[i]);
		outtextxy(20+j,450,output);
		sleep(1);
	}
	getch();
	closegraph();
	return 0;
 }