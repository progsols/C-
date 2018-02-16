//Write a program that converts “Small Alphabet”
//into “Capital Alphabet” and vice versa.

#include<iostream.h>
#include<conio.h>
main()
{
	char ch, res;
	clrscr();
	cout<<"Enter any alphabet ? ";
	cin>>ch;
	if(ch>='a' && ch<='z')
	
		res = ch-32;
	
	else
		res = ch+32;
	cout<<"Converted alphabet is : "<<res;
	getch();
}
