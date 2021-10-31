#include <iostream>;
#include <cmath>;
using namespace  std;
int main()
{
	int a = 20, sum = 0;
	do {
		if (a % 3 == 0)	sum += pow(a, 2);
		a++;

	} while (a <= 120);
	cout << "summa=" << sum << endl;
}
