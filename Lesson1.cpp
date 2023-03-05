#include <iostream>
using namespace std;
int main()
{
    int IloscCukierkow, iloscUczniow;
    cout << "Podaj ilość cukierków: ";
    cin >> IloscCukierkow;
    cout << "Podaj ilość ucznów: ";
    cin >> iloscUczniow;
    cout << (IloscCukierkow / (iloscUczniow - 1));
}