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

	int i, j, batata1[5][3], batata2[5][3], resultado = 1;
	cout << "Escreve os valores de uma matriz, separados por espaço para coluna e enter para linha\n";
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> batata1[i][j];
		}
	}
	cout << "Escreve os valores da segunda linha\n";
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> batata2[i][j];
		}
	}
	while (resultado != 0)
	{
		system("cls");
		cout << " ----------MENU----------\n";
		cout << "1 para somar\n";
		cout << "2 para subtrair\n";
		cout << "0 para sair\n";
		cin >> resultado;
		switch (resultado)
		{
		case 1:
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 3; j++)
				{
					cout << batata1[i][j] + batata2[i][j] << " ";
				}
				cout << "\n";
			}
			cout << "Carrega em qq sitio para continuar";
			cin.ignore();
			cin.get();
			break;
		case 2:
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 3; j++)
				{
					cout << batata1[i][j] - batata2[i][j] << " ";
				}
				cout << "\n";
			}
			cout << "Carrega em qq sitio para continuar";
			cin.ignore();
			cin.get();
			break;
		case 0:
			cout << "Fizeste caca, vou limpar o código. Passar bem!";
			break;
		default:
			cout << "Este valor  não é válido\n";
			cout << "Carrega em qq sitio para continuar";
			cin.ignore();
			cin.get();
			break;
		}
	}
	return 0;
}
    



  
