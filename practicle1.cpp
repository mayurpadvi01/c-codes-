#include<stdio.h>
#include<conio.h>
	void swap(int x,int y)
	{
		int temp;
		temp=x;
		x=y;
		y=temp;
	}
		
	
int main()
{
	int x=20,y=50;
	swap (x,y);// passsing value to function
	printf("\n the value of x :-%d ",x);
	printf("\n the value of y:-%d",y);
	getch();
	return 0;
}
	