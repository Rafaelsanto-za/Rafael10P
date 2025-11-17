#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));

    int tentativas = 0;
    int correto = 0;
    int secret[4];
    int entrada[4];
    int num;
    
    for (int i = 0; i < 4; ++i)
    {
        secret[i] = rand() % 2;
    }

    cout << "Bem-vindo ao MasterMind Binário!" << endl;
    cout << "Tente adivinhar o código secreto de 4 dígitos (0 e 1)." << endl;

    do
    {

        tentativas++;
        cout << "Tentativa " << tentativas << " (4 dígitos 0/1): ";


        for (int i = 0; i < 4; i++)
        {
            cin >> entrada[i];
        }

        correto = 0;


        for (int i = 0; i < 4; i++)
        {
            if (entrada[i] == secret[i])
            {
                correto++;
            }
        }

        if (correto == 4)
        {
            cout << "Parabéns! Você acertou o código!" << endl;
            cout << "Número de tentativas: " << tentativas << endl;
            break;
        }
        else
        {
            cout << "Você acertou " << correto << " dígito(s) na posição correta." << endl;
        }
    } while (correto != 4);
    


    return 0;
}
