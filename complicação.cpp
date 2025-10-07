#include <iostream>
#include <locale>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int n; 
	//que diabos de complicação de multiplicada​
	do {
		std::cout << "digite um numero";
		std::cin >> n;
		if (n == 0) break;

		if (n % 3 == 0 && n % 5 == 0)
			std::cout << "multioli de 3 e 5\n";
			
		else if (n % 3 == 0)
			std::cout << "multiplo de 3\n";
		else if (n % 5 == 0)
			std::cout << "multiplo de 5\n";
		else
			std::cout << "não é multiplo de 3 e nem 5\n";

	} while (n != 0);
	


	return 0;
}