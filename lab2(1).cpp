#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double z,x,c;
    cin >>z;
    x=z/10; // 1 �����
    c=z%10; // 2 �����
    c+=x;
    if (c>z) cout <<" ����� ���� ������ ������ �����" <<endl;
    else cout <<" ����� ���� �� ������ ������ �����"  <<endl;
    _getch();
    return(0);

}

