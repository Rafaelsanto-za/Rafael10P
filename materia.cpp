#include <iostream>
#include <locale>

int main() {
    setlocale(LC_ALL, "Portuguese");

    std::string Materias[5] = { "matemaitca", "fisicaquimica", "Portugues","historia","Educaçãofisica"};
    int num;
    char sair;

    do {
        std::cout << " escolha a mareria  (0 a 5): ";
        std::cin >> num;

        if (num >= 0 && num <= 5) {
            std::cout << "Você escolheu a materia : " << Materias[num] << ".\n";
        }
        else {
            std::cout << "Número inválido! Tente novamente.\n";
            
        }

        std::cout << "Deseja sair? (s/n): ";
        std::cin >> sair;

    } while (sair != 's' && sair != 'S');



    return 0;
}