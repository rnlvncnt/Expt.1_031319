#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	double a, b, c1, c2,d, e, interest;
	cout<<"net balance?"<<endl;
	cin>>a;

	cout<<"made payment?"<<endl;
	cin>>b;

	cout<<"days in the billing cycle?"<<endl;
	cin>>c1;

	cout<<"the number of days payment is made before billing cycle?"<<endl;
	cin>>c2;

	cout<<"interest rate?"<<endl;
	cin>>d;

	e = (a*c1-d*c2)/c1;
	interest = (e*d);
	cout<<"interest = "<<interest<<endl;

	_getch();
	return 0;
}