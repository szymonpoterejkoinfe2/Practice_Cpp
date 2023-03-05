#include <iostream>
#include <cstdlib>
using namespace std;
int miesiac, rok;

int main()
{

    cout << "Podaj numer miesiąca: ";
    if (!(cin >> miesiac))
    {

        cerr << "To nie jest liczba!";
        // exit(0);
    }

    switch (miesiac)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    {

        cout << "Miesiąc ma 31 dni" << endl;
    }
    break;

    case 4:
    case 6:
    case 9:
    case 11:
    {

        cout << "ten miesiąc ma 30 dni!" << endl;
    }
    break;
    case 2:
    {
        cout << "Podaj aktualny rok: ";
        cin >> rok;
        if ((rok % 4 == 0) && (rok % 100 != 0) || (rok % 400 == 0))
        {
            cout << "Ten miesiąc ma 29 dni";
        }
        else
            cout << "Ten miesiąc ma 20 dni";
    }
    break;
    }

    return 0;
}