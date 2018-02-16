//Write a program that inputs a number
//and displays whether it is an even 
//number or odd number using logical 
//operator “!” and if-else statement.

#include<iostream.h>
#include<conio.h>

main()
{

	int n;
	clrscr();
	cout<<"Enter any number ? ";
	cin>>n;
	if (!(n%2==0))
		cout<<"Odd number"<<endl;
	else
		cout<<"Even number"<<endl;
	getch();	
}
