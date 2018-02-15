//Write a program that inputs marks of three subjects of a student.
//If average marks are more than 50, it displays messages “Your 
//average marks are more than 50” and “Congratulation to you” in 
//two lines using two output statements. Use simple ‘if’ statement 
//in the program.

#include<iostream.h>
#include<conio.h>

void main()
{

	int s1, s2, s3;
	float avg;
	clrscr();
	cout<<"Enter marks of first subject ? ";
	cin>>s1;
	cout<<"Enter marks of second subject ? ";
	cin>>s2;
	cout<<"Enter marks of third subject ? ";
	cin>>s3;
	avg = (s1+s2+s3)/3.0;
	if(avg > 50)
	{
		cout<<"Your average marks are more than 50"<<endl;
		cout<<"Congratulation to you"<<endl;
	}
	cout<<"End of the program";
	getch();
}
