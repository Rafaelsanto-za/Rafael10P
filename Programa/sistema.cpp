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
	int M,N,A,b,D;
	int abaixoMinimo = 0;
	int acimaMaximo = 0;
	int adequado = 0;
	int gotas;
	string sequencia;
	cin >> M >> N >> A >> b ;
	cin >> D;
	cin.ignore();
	for (int i = 0; i < D; i++)
	{
		gotas = 0;
		getline(cin, sequencia);
		for (char contar : sequencia) 
		{
			if (contar == '1')
			{
				gotas++;
			}
			
		}
		if (gotas<M)
		{
			abaixoMinimo++;
		}
		else if (gotas > N)
		{
			acimaMaximo++;
		}
		else if (gotas >= A && gotas<=b)
		{
			adequado++;
		}
	}
	cout << abaixoMinimo << "  " << acimaMaximo << "  " << adequado << "  ";

	return 0;
}
//a