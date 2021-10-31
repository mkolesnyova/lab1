#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double z,x,c;
    cin >>z;
    x=z/10; // 1 цифра
    c=z%10; // 2 цифра
    c+=x;
    if (c>z) cout <<" сумма цифр больше самого числа" <<endl;
    else cout <<" сумма цифр не больше самого числа"  <<endl;
    _getch();
    return(0);

}

