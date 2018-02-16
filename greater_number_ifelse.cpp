//Write a program that inputs two values 
//and finds out the greater value using 
//if-else structure and displays result on screen.

#include<iostream.h>
#include<conio.h>

void main()
{

	int a, b;
	clrscr();
	cout<<"Enter first value ? ";
	cin>>a;
	cout<<"Enter second value ? ";
	cin>>b;
	if (a>b)
		cout<<"First value is greater"<<endl;
	else
		cout<<"Second value is greater"<<endl;
	cout<<"End of the program";
	getch();	
}
