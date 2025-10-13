#include <iostream>
#include <locale>

int main() {
    setlocale(LC_ALL, "Portuguese");

    std::string carros[3] = { "Volvo", "BMW", "Mercedes" };
    int num;
    char sair;

    do {
        std::cout << "Digite um número de carro válido (0 a 2): ";
        std::cin >> num;

        if (num >= 0 && num <= 2) {
            std::cout << "Você escolheu o carro: " << carros[num] << ".\n";
        }
        else {
            std::cout << "Número inválido! Tente novamente.\n";
            continue;
        }

        std::cout << "Deseja sair? (s/n): ";
        std::cin >> sair;

    } while (sair != 's' && sair != 'S');

   

    return 0;
}
 

