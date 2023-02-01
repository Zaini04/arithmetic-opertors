#include<iostream>//preprocessor directive 
using namespace std;//header file
int main ()//this is main function
{//opening braces
	int a,b,sum,multiple,subtraction,division;//it will declare the values
	cout<<"a=";//this will print as it is a=
	cin>>a;//value is given by the user
	cout<<"b=";
	cin>>b;
	multiple=a*b;
	cout<<"\nmultiple=";
	cout<<multiple;
	sum=a+b;
	cout<<"\nsum=";
	cout<<sum;//this print the value of sum
	division=a/b;
	cout<<"\ndivision=";
	cout<<division;
	subtraction=a-b;
	cout<<"\nsubtraction=";
	cout<<subtraction;
	return 0;
}//closing braces
