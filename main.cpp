# csc125Project4#include "Policy.h"
#include "AutoPolicy.h"
#include "HomePolicy.h"
#include "LifePolicy.h"

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	AutoPolicy car("Craig", "Swearingen", "Ford", "Mustang", "1xdf456ed", 10000.00, 30000.00);
	HomePolicy home("Craig", "Swearingen", 2000, 10000.00, 30000.00, 100000.23);
	LifePolicy life("Craig", "Swearingen", 29, "Haley", "Grimm", 30000.00);

	cout << car;
	cout << home;
	cout << life;

	return 0;
}
