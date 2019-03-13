#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()

{
	double box, sideline, premium, generaladmission;

	
	
	cout << "Box: 250" << endl;
	cout << "Enter number of tickets sold for Box: " << endl;
	cin >> box;
	
	cout << "For Box: " <<box << 250 * box << endl;

	cout << "Sideline: 100" << endl;
	cout << "Enter number of tickets sold for Sideline: " << endl;
	cin >> sideline;
	
	cout << "For Sideline: " << sideline << 100 * sideline << endl;

	cout << "Premium: 50" << endl;
	cout << "Enter number of tickets sold for Premium: " << endl;
	cin >> premium;
	
	cout << "For Premium: " << 50 * premium << endl;

	cout << "General Admission: 25" << endl;
	cout << "Enter number of tickets sold for General Admission: " << endl;
	cin >> generaladmission;

	cout << "For General Admission: " << 25 * generaladmission << endl;
	
	cout << "Total Ticket Price: " <<  (250 * box) + (100 * sideline) + (50 * premium) + (25 * generaladmission) <<  endl;
	

	_getch();
    return 0;
	
}