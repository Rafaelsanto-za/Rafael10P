#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int calculos(int n) 
{
	
	



}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int i,numero,valor,n;

	for (i = 0; i < 10; i++) {
		cout << "insira 10 numeros\n";
		cin >> n;

		if (n > 10 || n < 0)
		{
			cout << " o nome esta incorreto";
		}
//ingr
		cout << "------------------Menu------------------";
		cout << "1-calcula a media dos numeros\n";
		cin >> numero;
		cout << "2-achar o menor\n ";
		cin >> numero;
		cout << "3-Achar o maior\n ";
		cin >> numero;
		cout << "0-Sair\n ";
		cout << "----------------------------------------";

		valor = calculos(n);
	    


	}
	

	return 0;
}