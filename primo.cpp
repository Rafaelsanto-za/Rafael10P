#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int N, D;
    int Cont = 0;

    cout << "Escolhe um n�mero: ";
    cin >> N;

    D = N;
    while (D != 0)
    {
        if (N % D == 0)
        {
            Cont = Cont + 1;
        }
        D = D - 1; 
    }
    if (Cont == 2)
    {
        cout << "O n�mero � Primo";
    }
    else
    {
        cout << "O n�mero n�o � Primo";
    }

    return 0;
}