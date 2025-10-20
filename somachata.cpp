#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int r, quantos = 0;
	float n, soma = 0;
	string numeros[10] = {};

	for (int i = 0; i < 10; i++)
	{
		cout << "Escolhe um número: ";
		cin >> n;

		if (n < 0)
		{
			quantos = quantos + 1;
			soma = soma + n;
		}

	}

	cout << "\n\nQueres saber quantos números negativo meteste (1) ou a soma deles (2) ?: ";
	cin >> r;

	if (r == 1)
	{
		cout << "\ninseriste " << quantos << " números negativos\n";
	}
	else if (r == 2)
	{
		cout << "A soma dos números  é " << soma << "\n";
	}
	else
	{
		cout << "Escolhe entre 1 e 2\n";
	}

	return 0;
