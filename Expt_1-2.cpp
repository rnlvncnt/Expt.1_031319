#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double mass, density;
	cout << "mass?:" <<endl;
	cin >> mass;
	cout << "mass = " << mass << "g" <<endl;
	
	cout << "density?: " << endl;
	cin>> density;
	cout << "density =" << density << "g/cm^3" << endl;
	
	cout << "volume of the object = " << mass/(4*density) << "cm^3" << endl;
	
	_getch();
	return 0;

}