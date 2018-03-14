#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

int a = 10;
void main()
{
  int a = 15;
  cout<<"a"<<a;
  cout<<"::a"<<::a;

  {
   int a =25;
   cout<<"a"<<a;
   cout<<"::a"<<::a;
  }

  cout<<"a"<<a;
  cout<<"::a"<<::a;
}