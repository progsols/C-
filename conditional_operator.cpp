#include<stdio.h>
#include<conio.h>
#include<iostream.h>

void main()
{
 int a;
 clrscr();
cout<<"Enter a number :";
cin>>a;
(a>50)?cout<<"Number is greater than 50\n" :cout<<"Number is smaller than 50\n";
cout<<(a>50)?"Number is greater than 50\n" :"Number is smaller than 50\n";
//cout<<"Number is greater than 50\n";
//cout<<"End of execution";
getch(); 
}