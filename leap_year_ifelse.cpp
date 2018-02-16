//A year is a leap year if it is divisible by 4, 
//except that any year divisible by 100 is a leap 
//year only if it is divisible by 400. 
//Write a program that inputs a year such as 1990 and displays 
//“Leap year” if it is a leap year, otherwise displays “Not a leap year”.

#include<iostream.h>
#include<conio.h>
main()
{

	int year;
	clrscr();
	cout<<"Enter a year ? ";
	cin>>year;
	if(year % 4 == 0 || year % 100 == 0 && year % 400 == 0)
		cout<<"Leap year";
	else
		cout<<"Not a leap year";
	getch();
}

