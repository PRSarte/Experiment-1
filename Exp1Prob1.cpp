#include <iostream>
#include <conio.h> 
#include <cmath> 
#include <iomanip>

using namespace std;
int sales(float x, float y) //Calculate total sales per ticketType
{
	int r;
	r = x * y;
	return r;
}
int total(float a, float b, float c, float d) //Calculate total sales all in all
{
	int r;
	r = a + b + c + d;
	return r;
}
int main()
{
	int box, side, prem, genad, priceB = 250, priceS = 100, priceP = 50, priceG = 25;
	float a, b, c, d, e;

	cout << fixed << showpoint << setprecision(2);
	cout << "Please enter no. of tickets sold: \n";
	cout << "\tTicket Price\tNo. of Tickets Sold" << endl;

	cout << "Box\t" << priceB << "\t\t" << flush; //box variable
	cin >> box;
	a = sales(box, priceB);

	cout << "Side\t" << priceS << "\t\t" << flush; //side variable
	cin >> side;
	b = sales(side, priceS);

	cout << "Prem\t" << priceP << "\t\t" << flush; // prem variable
	cin >> prem;
	c = sales(prem, priceP);

	cout << "GenAd\t" << priceG << "\t\t" << flush; //genad variable
	cin >> genad;
	d = sales(genad, priceG);

	cout << "\nTotal per ticket sales: ";
	cout << a << endl;
	cout << "\t\t\t" << b << endl;
	cout << "\t\t\t" << c << endl;
	cout << "\t\t\t" << d << endl;
	//Outputs of per ticket sales

	e = total(a, b, c, d);
	cout << "\nTotal sales: \t\t" << e << endl;
	//Outputs whole ticket sales

	_getch();
	return 0;
}
