#include <iostream> // cin cout 
using namespace std;
void main()
{
	double a = 0, sum = 0, x = 6;
	do {
		a = 1 / x;
		x += 6;
		sum += a;
	} while (x <= 42);
	cout << "summa=" << sum << endl;
}
