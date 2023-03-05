#include <iostream>
using namespace std;

// string Pin;
// int main()
// {

//     cout << "Witamy. Podaj PIN: ";
//     cin >> Pin;

//     if (Pin == "1729")
//     {
//         cout << "Poprawny pin";
//     }
//     else
//     {
//         cout << "pin nieprawidłowy";
//     }

//     return 0;
// }

// string login, haslo;
// int main()
// {

//     cout << "Podaj Login: ";
//     cin >> login;
//     cout << "Podaj Hasło: ";
//     cin >> haslo;

//     if (login == "admin" && haslo == "1234")
//     {

//         cout << "Logowanie poprawne!";
//     }
//     else
//     {
//         cout << "Błędne dane logowania";
//     }

//     return 0;
// }

int wiek;

int main()
{
    cout << "Podaj swój wiek: ";
    cin >> wiek;
    if (wiek >= 18)
    {

        cout << "Jesteś pełnoletni \n";
        if (wiek >= 35)
        {

            cout << "możesz zostać prezydentem";
        }
    }
    else
    {
        cout << "nie jesteś pełnoletni";
    }

    return 0;
}