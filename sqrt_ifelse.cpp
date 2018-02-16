//Write a program that inputs a number
//and calculates the square root of the 
//number if the number is greater than 0.
//Otherwise it displays a message “Number is negative or zero”.

#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
	double res;
	int n;
	clrscr();
	cout<<"Enter a number ? ";
	cin>>n;
	if(n > 0)
	{
		res = sqrt(n);
    		cout<<"Square root of "<<n<<" is = "<<res;
	}
	else
    		cout<<"Number is negative or zero ";
	getch();
}
