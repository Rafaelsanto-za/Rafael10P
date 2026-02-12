#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <cctype>
using namespace std;

int main()
{
	int A, L, C, musica;

	cin >> A >> L >> C;
	musica = A * L * C;

	if (musica >= 50 || A > 3)
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}

	return 0;

}