#include <iostream>
using namespace std;
int main()
{
	int a, sum, b = 2;
	cout << "vvedite naturalnoe chislo=";
	cin >> a;
	for (sum = 0; b <= a;)
	{
		if (a % b == 0)
		{
			sum += b;
		}
		b+=2;
	}
	cout <<"sum="<< sum;
}
