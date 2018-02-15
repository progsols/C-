//Write a program that inputs a character and
//determines whether it is a lowercase letter
//or not using a simple ‘if’ statements.

#include<iostream.h>
#include<conio.h>

void main()
{

	char ch;
	clrscr();
	cout<<"Enter a character ? ";
	cin>>ch;
	if(ch>='a' && ch<='z')
		cout<<"Entered character is lowercase letter"<<endl;
	cout<<"End of the program";
	getch();	
}
