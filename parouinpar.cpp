#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;

	do
	{
		cout << "Escolhe um n�mero: ";
		cin >> num;

		if (num % 2 == 0)
		{
			cout << "O n�mero � par!\n";
		}
		else
		{
			cout << "O n�mero � impar!\n";
		}
	} while (num != 0);



}