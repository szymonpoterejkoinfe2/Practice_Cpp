#include <iostream>
#include <windows.h>
using namespace std;

// int main()
// {

//     for (int i = 15; i >= 0; i--)
//     {
//         Sleep(1000);
//         system("cls");
//         cout << i << endl;
//     }
//     cout << "Jebut";
//     return 0;
// }

// string imie;
// int liczba;
// int main()
// {
//     cout << "Podaj imie";
//     cin >> imie;
//     cout << "podja liczbe +";
//     cin >> liczba;

//     for (int i = 1; i <= liczba; i++)
//     {

//         cout << i << " ." << imie << endl;
//     }
//     return 0;
// }

int populacja = 1, godzin = 0;

int main()
{
    while (populacja <= 1000000000)
    {
        godzin++;
        populacja *= 2;

        cout << "Mineło godzin: " << godzin << " Populacja wynosi: " << populacja << endl;
    }
}