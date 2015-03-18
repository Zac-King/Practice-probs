#include <iostream>

// 1 lb = 5 cups
// input number of pounds
// input how many cups per day
// output number of days the food will last

void Practice2_2(int p, float c)	// How many Pounds, Cups per day
{
	float np = p * 5;
	int L = np / c;

	std::cout << L << " Days" << std::endl;
}