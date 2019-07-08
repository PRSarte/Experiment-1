#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

double balance(double v, double w, double x, double y)
{
	double bal;
	bal = (v * w * y / x );
	return bal;
	//Average daily balance operation
}

int main ()
{
	double netBal, d1, pay , d2, interest, rate, w, x, sub,bala;
	char any;
	
	cout << fixed << showpoint << setprecision(3);
	cout << "I will calculate the Interest of the person's unpaid balance: " << endl;
	
	cout << "What is the person's balance?: ";
	cin >> netBal;
	cout << "How much has he paid? ";
	cin >> pay;
	cout << "Please enter the number of days of the billing cycle: ";
	cin >> d1;
	cout << "Enter the number of days that the payment was made before the billing cycle: ";
	cin >> d2;
	cout << "Please enter the rate of interest: ";
	cin >> rate;
	//Asking for input

	sub = d1 - pay;
	bala = balance (netBal, sub, d1 ,d2); //declares balance that will be passed to double balance above.

	interest = bala * rate; //declares interest.

	cout << "Calculating the Average Daily Balance....." << endl;
	cout << "Enter anything to continue....";
	cin >> any;

	cout << bala << "is his average daily balance." << endl;

	cout << "Now Calculating the interest on the credit card....." << endl;
	cout << "Enter anything to continue....";
	cin >> any;
	cout << interest << "is his interest. ";
	
_getch ();
return 0;
}