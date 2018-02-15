#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int a=1;
begin:
cout<<"Hello World"<<endl;
a++;
if(a<=5) goto begin;
getch();
}
