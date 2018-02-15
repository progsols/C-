//Write a program that inputs a number and determines
//whether it is positive, negative, or zero using a 
//sequence of simple ‘if’ statements.

#include<iostream.h>
#include<conio.h>

void main()
{

	int n;
	clrscr();	
	cout<<"Enter a number ? ";
	cin>>n;
	if(n > 0)
		cout<<"The number is positive";
	if(n < 0)
		cout<<"The number is negative";
	if(n == 0)
		cout<<"The number is zero";
	getch();	
}
