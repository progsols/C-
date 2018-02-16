//Write a program that displays/prints the 
//largest and smallest value entered by a 
//user ten times in a single variable during the program execution.

#include<iostream.h>
#include<conio.h>
main()
{
	int smallest, largest, count, num;
	clrscr();
	count = 1;
	cout<<"Enter a number ? ";
	cin>>num;
	smallest = largest = num;
	begin:
	cout<<"Enter a number ? ";
	cin>>num;
	if(smallest > num)
		smallest = num;
	if (largest < num)
		largest = num;
	count++;
	if(count < 10) goto begin;
      //		res = ch+32;
	cout<<"Largest entered value is : "<<largest<<endl;
 	cout<<"Smallest entered value is : "<<smallest<<endl;
	getch();
}