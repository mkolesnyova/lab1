#include <iostream>

using namespace std;
int main()
{
	int k = 0, s = 0, a = 0;
	do
	{
		cin >> a;
		if ((a > 0) && (a % 7 == 0) && (a % 5 != 0)) k++;
		if (a < 0) s += a;
	} while (a != 0);
	cout << "k=" << k;
	cout << "s=" << s;
}