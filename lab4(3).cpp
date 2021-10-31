#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double x, y;
	for (x = -5; x <= 5.2; x += 0.2)
	{
		if (x <= -3) {
			y = pow(x, 3);
			cout << "x=" << setw(4) << x << " y=" << y << endl;
		}
		if ((-3 < x) && (x <= 2)) {
			y = pow(2, x);
			cout << "x=" << setw(4) << x << " y=" << y << endl;
		}
		if (x > 2) {
			y = log10(x);
			cout << "x=" << setw(4) << x << " y=" << y << endl;
		}

	}
}