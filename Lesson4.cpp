#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>

using namespace std;

// int liczba, odgad, il = 0;

// int main()
// {
//     cout << "Witaj w grze!" << endl;
//     srand(time(NULL));
//     liczba = rand() % 100 + 1;
//     cout << liczba << endl;
//     while (odgad != liczba)
//     {
//         cout << "Zgadnij liczbę: " << endl;
//         cin >> odgad;
//         if (liczba == odgad)
//         {

//             cout << "Gratulacje" << endl;
//         }
//         else if (odgad > liczba)
//         {
//             cout << "To za dużo" << endl;
//         }
//         else if (odgad < liczba)
//         {
//             cout << "To za mało" << endl;
//         }
//         il++;
//     }
//     cout << "Próby: " << il << endl;

//     system("pause");

//     return 0;
// }

// GRA DUŻY LOTEK PROGRAM

int liczba;

int main()
{
    cout << "Witamy w losowaniu! Poczekaj na liczby" << endl;
    Sleep(3000);
    cout << "Oto wylosowane liczby: " << endl;
    srand(time(NULL));
    for (int i = 0; i <= 6; i++)
    {
        liczba = rand() % 49 + 1;
        Sleep(1000);
        cout << liczba << "\a" << endl;
    }
    system("pause");
    return 0;
}