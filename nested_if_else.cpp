#include <conio.h>
#include <iostream.h>
void main()
{
	clrscr();
	int a;
	cout<<"Enter a value ";
	cin>>a;
	if (a>=10)
	{
		if (a>=15)
		{
			cout<<a<<"is greater than or equal to 15\n";
		}
		else
		{
			cout<<a<<"is smaller than 15 but greater than or equal to 10\n";
		}
	}
	else
	{
		cout<<a<<"is smaller than 10\n";
	}
	getch();
}