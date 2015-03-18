#include <iostream>
#include <iomanip>
using namespace std;

void Practice2_1(int n, int s)
{
	float nb = n * 0.25f;	// Num bought 
	float ns = s * 0.50f;	// Num Sold
	float tp = ns - nb;		// Total profit

	if (tp > 0)
	{	cout << "$" << std::fixed << std::setprecision(2) << tp << " PROFIT" << endl;	}
	else
	{	cout << "$" << std::fixed << std::setprecision(2) << tp / -1 << " LOSS" << endl;}
}

int main()
{
	int ni;
	int ns[32];
	int nb[32];

	cout << "Enter Values : ";
	cin >> ni;

	for (int x = 0; x < ni; ++x)
	{
		cin >> nb[x];
		cin >> ns[x];
	}
	for (int y = 0; y < ni; ++y)
	{
		Practice2_1(nb[y], ns[y]);
	}
	system("Pause");
}