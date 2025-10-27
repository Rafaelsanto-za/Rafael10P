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
	
	string res[10] = { "15","2","53","4","1","17","5","23","45","19" };
	int numeros[10];

	for (int i = 0; i < 10; i++) {
		numeros[i] = stoi(res[i]);
	}

	
	// usei o bool porque se o numero for maior(vedadeiro)troca,se  o vetor já está ordenado (trocar = false) e o loop termina.
	// Se durante uma passada pelo vetor algum número for maior que o próximo, ocorre uma troca (trocar = true).
	bool trocar;

		do {
			trocar = false;
			for (int i = 0; i < 9; i++) {
				if (numeros[i] > numeros[i + 1]) {

					int temp = numeros[i];

					numeros[i] = numeros[i + 1];

					numeros[i + 1] = temp;

					trocar = true;
				}
			}
		} while (trocar);

		//mostras os numeros ordenados :D;

		cout << "os numeros ordenados são";
		for (int i = 0; i < 10; i++) {
			cout << numeros[i] << " ";
		}
		


	return 0;
}