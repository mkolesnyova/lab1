#include <iostream>
using namespace std;
int main()
{
	double b, x, k = 0;
	cout << "vvedite b>=100\n"; 
	cin >> b;
	for (x = 100; x <= b; x++) {
		k += x;
	}
	x = k / (b - 99);
	cout << "sr.arifm =" << x << endl;
}