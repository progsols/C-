#include <conio.h>
#include <iostream.h>
void main()
{
	clrscr();
	int a;
	cout<<"Enter a value ";
	cin>>a;
	if (a>=15){
		cout<<"Number is greater than or equal to 15";
	}
	else if (a>=10){
		cout<<"Number is greater than or equal to 10";
	}
	else if (a>=5){
		cout<<"Number is greater than or equal to 5";
	}
	else {
		cout<<"Number is smaller than 5";
	}
	getch();
}