#include <iostream>
using namespace std;
int main()
{
	int a, k = 0;
	cin >> a;
	while (a != 0)
	{
		if ((a % 10== 0) || (a % 10 == 5)) k++;
		a /= 10;
	}
	cout << "k=" << k << endl;
}