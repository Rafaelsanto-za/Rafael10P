#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include "totolo.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));


    int loteria[5];
    int num, certo = 0;

    for (int i = 0; i < 5; i++) {
        loteria[i] = (rand() % 49) + 1;

        cout << "digite o seu primeiro numero\n";
        cin >> num;




        cout << "fale um  numeros de 1 a 50: ";
        cin >> num;

        if (num > 50 || num < 1) {

            cout << " O NUMERO É DE 1 A 50 SEU IDIOTA  \n";
            i--;

        }
        else {
            if (num == loteria[i]) {
                certo++;
            }

        }
    }
    cout << "olha que sorte acertou = " << certo << "\n";


    for (int i = 0; i < 5; i++) {
        int tts = i;
        for (int j = i + 1; j < 5; j++) {

            if (loteria[j] < loteria[tts]) {
                tts = j;
            }
            if (tts != i) {
                int teste = loteria[i];

                loteria[i] = loteria[tts];

                loteria[tts] = teste;
            }
        }
    }
    cout << "Os numeros sortiados eram : \n";
    for (int i = 0; i < 5; i++) {

        cout << loteria[i] << "\n";
    }
    if (certo == 5) {
        cout << "parabens acertaste\n";
    }
    else {
        cout << "meu deus erraste tudo boa sorte pra procima \n ";
    }
    return 0;
}
