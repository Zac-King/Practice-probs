// credit to guy with his swollen head

#include <iostream>
#include <iomanip>
using namespace std;

void Practice2_1(int n, int s)
{
	float nb = n * 0.25f;	// Num bought 
	float ns = s * 0.50f;	// Num Sold
	float tp = ns - nb;		// Total profit

	if (tp > 0)
	{	cout << "$" << fixed << setprecision(2) << tp << " PROFIT" << endl;}
	else
	{	cout << "$" << fixed << setprecision(2) << tp / -1 << " LOSS" << endl;}
}