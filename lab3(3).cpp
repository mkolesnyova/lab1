#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void main()
{
	float x = 1, y;
	const float e = 2.718;
	while (x <= 3)
	{
		y = abs(pow(e, x) - 2) - pow(x, 2);
		x += 0.2;
		cout << "x=" << x << setw(15) << "y=" << y << endl;
	}
}
	