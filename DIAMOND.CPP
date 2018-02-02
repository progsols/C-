#include<stdio.h>
#include<conio.h>
#include<iostream.h>

void main()
{
 int n, i, j, space = 1;
 clrscr();
 cout<<"Enter number of rows: ";
 cin>>n;
 space = n-1;
  for (i = 1; i<=n; i++)
  {
    for (j=1; j<=space; j++)
      cout<<(" ");
    space--;

    for (j= 1; j<= 2*i-1; j++)
      cout<<("*");
    cout<<("\n");
  }
 
  space = 1;
  for (i = 1; i<= n - 1; i++)
  {
    for (j=1; j<= space; j++)
      cout<<(" ");
    space++;
 
    for (j=1 ; j<= 2*(n-i)-1; j++)
      cout<<("*");
    cout<<("\n");
  }
getch();
}