#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <windows.h>

using namespace std;

float oceny[5];
float suma = 0.0;

// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         cout << endl
//              << i + 1 << "podaj ocene: ";
//         cin >> oceny[i];
//         suma += oceny[i];
//     }
//     cout << suma;
// return 0;
// }

long double fib[10000000];
long double n = 0;
int main()
{
    cout << "ile liczb Fibonacciego mam wyznaczyć: ";
    cin >> n;

    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout << setprecision(10000);
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "wyraz nr " << i + 1 << ": " << fib[i];
    }
    return 0;
}