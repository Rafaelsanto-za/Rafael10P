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
	int idade[5],i,total=0,cont=0;
	float altura[5],totalA=0;
	for(i = 0;i < 5 ; i++)
	{
		cout << "qual � a idade do " << i+1 << "� aluno\n";
		cin >> idade[i];
		cout << "qual � a altura do " << i+1 << "� aluno\n";
		cin >> altura[i];
		totalA = totalA + altura[i];
	}
		totalA = totalA / 5;
		for (i = 0; i < 5; i++) 
		{
			if (idade[i] > 13)
			{
				if (altura[i] < totalA)
				{
					cont++;
				}
			}
		}
		cout << "os alunos com mais de 13 anos e altura inferior a media s�o " << cont << "\n";
	return 0;
}