#include <iostream>
using namespace std;
int main()
{
    double x, y, a, b;
    setlocale(LC_ALL, "RUSSIAN");
    cout << " x= ";
    cin >> x;
    cout << " y= ";
    cin >> y;
    cout << " a= ";
    cin >> a;
    cout << " b= ";
    cin >> b;
    if (((x * x + y * y) > (a * a)) && ((-b) < x)&&(x < b) && ((-b) < y)&&(y < b))
        cout << "Точка принадлежит заштрихованной области" << endl;
    else
        cout << "Точка НЕ принадлежит заштрихованной области" << endl;
    return 0;
}