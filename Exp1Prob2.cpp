#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	float x, y, z;
	char any;
	
	cout << fixed << showpoint << setprecision (2);
	cout << "I will calculate the volume of your object for you!" << endl;
	cout << "Please enter the mass of your object in grams: ";
	cin >> x;
	cout << "\nNow please enter how dense the object is in grams and cubic centimeters: ";
	cin >> y;
	cout << "\n\nNow calculating the volume of the object." << endl;
	cout << "Please enter anything to continue." << endl;
	cin >> any;
	
	z = 0.25 * x / y;
	cout << z << " cubic centimeters";
	//code block for outputting of volume using density formula
	
_getch();
return 0;
}
