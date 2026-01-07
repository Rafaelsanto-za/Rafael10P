#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int calculos(int n) 
{
	
	return 0;

}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i,numero,valor,n;

	for (i = 0; i < 10; i++) 
	{
		cout << "\ninsira 10 numeros\n";
		cin >> n;

		if (n > 2147483647 || n < -2147483648)
		{
			cout << " O Numero esta incorreto\n";
			cout << " Teste novamente:\n ";
		}
//ingr
//Nesse programa, use 3 funções para os pontos 1, 2 e 3.​

		
		valor = calculos(n);


		
		
	}
	do {
		system("cls");

		cout << "\n------------------Menu------------------\n";

		cout << "\n1-calcula a media dos numeros\n";

		cout << "\n2-achar o menor\n ";

		cout << "\n3-Achar o maior\n ";

		cout << "\n0-Sair\n ";

		cout << "\n----------------------------------------\n";

		cout << "escolha uma opeção\n";

		cin >> numero;

		switch (numero) {
		case 1:
			cout << "A media dosnumeros são:" <<      <<;


		}

	} while (numero != 0);
	

	

	


	

	return	0;
}
