#include <iostream>;
#include <cmath>;
using namespace  std;
int main()
{
	int a = 20, sum = 0;
	while (a <= 120)
	{
		if (a % 3 == 0)	sum += pow(a, 2);
		a++;
	}
	cout << "summa=" << sum << endl;
}
