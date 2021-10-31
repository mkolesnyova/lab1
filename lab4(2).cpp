#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double s = 0, a;
	int x;
	for (x = 1; x <= 10; x++) {
		cout << "vvedite" << setw(3) << x << " chislo: ";
		cin >> a;
		s += pow(a, 2);
	}
	cout << "summa kvadratov= " << s << endl;
}
