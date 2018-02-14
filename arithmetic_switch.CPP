#include<conio.h>
#include<iostream.h>
void main()
{
	clrscr();
	double a,b;
	char op;
	cout<<"Enter First Number \n";
	cin>>a;
	cout<<"Enter an operator (+, -, *,/): \n";
    cin>>op;
	cout<<"Enter Second Number \n";
	cin>>b;
	switch(op)
	{
		case '+':
		cout<<"Sum of "<<a<<" and "<<b <<" is equal to "<<a+b<<endl;
		break;
		case '-':
		cout<<"Subtraction of "<<a <<" and "<<b <<" is equal to "<<a-b<<endl;
		break;
		case '*':
		cout<<"Multiplication of "<<a <<" and "<<b<<" is equal to "<<a*b<<endl;
		break;
		case '/':
		cout<<"Division of "<<a <<" and "<<b<<" is equal to "<<a/b<<endl;
		break;
		/*case '%':
		cout<<"Modulus of "<<a<<" and "<<b<<" is equal to "<<a%b<<endl;
		break; */
		default:
		cout<<"You entered an invalid operator \n";
	}
	getch();
}