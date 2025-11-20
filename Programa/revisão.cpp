#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));

    
        int base, expoente,i;
        float resultado= 1 ;

        cout << "Digite a base: ";
        cin >> base;
        cout << "Digite o expoente: ";
        cin >> expoente;

        for (i = 0; i < expoente; i++)
        {
           
            resultado = base * resultado;
            


        }
        cout << "o resultado é : " << resultado << "";
       


	return 0;
}